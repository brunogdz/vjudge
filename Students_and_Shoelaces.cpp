#include <set>
#include <map>
#include <vector>
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    map<int,set<int> > mp;
    for(int i=0;i<m;i++)
    {
        int x,y;cin>>x>>y;
        mp[x].insert(y);
        mp[y].insert(x);
    }
    int ans=0;
    bool flag=true;
    while(flag)
    {
        flag=false;
        set<pair<int,int> > grafo;
        for(auto i:mp)
        {
            if(i.second.size()==1)
            {
                grafo.insert(make_pair(i.first,*i.second.begin()));
            }
        }
        if(grafo.size()>0)
        {
            ans++;
            for(auto i:grafo)
            {
                mp[i.first].erase(i.second);
                mp[i.second].erase(i.first);
            }
            flag=true;
        }
    }
    cout<<ans<<"\n";
    return 0;
}