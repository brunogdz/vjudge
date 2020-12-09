#include <queue>
#include <vector>
#include <stdio.h>

using namespace std;

typedef pair<int, int> ii;

#define loop(i,a,b) \
    for(int i = int(a); i<=int(b);i++)

#define TRvii(it, v) \
    for(vector<ii>::iterator it = v.begin(); it != v.end(); ++it)




int dist[20005];
vector<ii> adj[20005]; // cost, node

void Sialize(int size){
	loop(i,0,size-1){ dist[i] = -1; adj[i].clear(); }
}

int tempo(int start, int end){
	dist[start] = 0;

	priority_queue<ii, vector<ii>, greater<ii> > q;

	q.push(ii(dist[start], start));
	int c = 0;
	ii p;
	while(!q.empty()){
		p = q.top(); q.pop();
		c = p.second;
		if(c == end) break;
		TRvii(it, adj[c]){
			if(dist[it->second] > (dist[c] + it->first) || dist[it->second] == -1){
				dist[it->second] = dist[c] + it->first;
				q.push(ii(dist[it->second], it->second));
			}
		}
	}

	if( c == end ) return dist[c];
	return -1;
}

int main() {
	int test = 0;
	scanf("%d", &test);

	loop(casos, 1, test){
		int N(0), M(0), S(0), T(0);
		scanf("%d %d %d %d", &N, &M, &S, &T);

		Sialize(N);

		int n1(0), n2(0), w(0);
		loop(i, 0, M -1){
			scanf("%d %d %d", &n1, &n2, &w);
			adj[n1].push_back(ii(w,n2));
			adj[n2].push_back(ii(w,n1));
		}

		int r = tempo(S, T);

		printf("Case #%d: ", casos);
		if(r == -1){
			printf("unreachable\n");
		}else{
			printf("%d\n", r);
		}
	}
	return 0;
}

#include <queue>
#include <vector>
#include <stdio.h>

using namespace std;

typedef pair<int, int> ii;

#define loop(i,a,b) \
    for(int i = int(a); i<=int(b);i++)

#define TRvii(it, v) \
    for(vector<ii>::iterator it = v.begin(); it != v.end(); ++it)




int dist[20005];
vector<ii> adj[20005]; // cost, node

void Sialize(int size){
	loop(i,0,size-1){ dist[i] = -1; adj[i].clear(); }
}

int tempo(int start, int end){
	dist[start] = 0;

	priority_queue<ii, vector<ii>, greater<ii> > q;

	q.push(ii(dist[start], start));
	int c = 0;
	ii p;
	while(!q.empty()){
		p = q.top(); q.pop();
		c = p.second;
		if(c == end) break;
		TRvii(it, adj[c]){
			if(dist[it->second] > (dist[c] + it->first) || dist[it->second] == -1){
				dist[it->second] = dist[c] + it->first;
				q.push(ii(dist[it->second], it->second));
			}
		}
	}

	if( c == end ) return dist[c];
	return -1;
}

int main() {
	int test = 0;
	scanf("%d", &test);

	loop(casos, 1, test){
		int N(0), M(0), S(0), T(0);
		scanf("%d %d %d %d", &N, &M, &S, &T);

		Sialize(N);

		int n1(0), n2(0), w(0);
		loop(i, 0, M -1){
			scanf("%d %d %d", &n1, &n2, &w);
			adj[n1].push_back(ii(w,n2));
			adj[n2].push_back(ii(w,n1));
		}

		int r = tempo(S, T);

		printf("Case #%d: ", casos);
		if(r == -1){
			printf("unreachable\n");
		}else{
			printf("%d\n", r);
		}
	}
	return 0;
}