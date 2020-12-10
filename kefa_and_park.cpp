#include <set>
#include <map>
#include <vector>
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef long long ll;
#define Tam 100010

vector<ll> adj[Tam];
bool vis[Tam];
ll n, m, total = 0;
ll cc[Tam];

void dfs(ll s, ll sum)
{
    if (vis[s])
        return;
    vis[s] = 1;
    if (cc[s])
        sum++;
    else
        sum = 0;
    if (sum > m)
        return;
    if (s != 1 && adj[s].size() == 1){
        total++;
    }
    for (int i = 0; i < adj[s].size(); i++){
        dfs(adj[s][i], sum);
    }
}

int main(){

    ll i, j, k;
    ll u, v;

    cin >> n >> m;

    for (i = 1; i <= n; i++)
        cin >> cc[i];

    for (i = 0; i < n - 1; i++)
    {
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);

    cout << total;

    return 0;
}