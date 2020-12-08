#include <set>
#include <map>
#include <vector>
#include <iostream>
#include <cstdio>
#include <queue>
#include <cstring>

vector <pair <int , int >> V[20000];
using namespace std;

int main (){
    int N,casos,M,S,T,i,x1,x2,x3,aux=0;
    cin>>casos;
    while(casos--){
        cin>>N>>M>>S>>T;

        // Limpando o vector
        for(i = 0; i <= N; i++){
            V[i].clear();
        }

        for(i = 0; i < M; i++){
            cin>>x1>>x2>>x3;
            V[x1].push_back(pair<int,int>(x2,x3));
            V[x2].push_back(pair<int,int>(x1,x3));
            // fizemos todos
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater <pair<int,int>>> Q;
        memset(d);
        //"teste";
    }

    return 0;
}