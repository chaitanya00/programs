#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void graph(vector<pair<int,int> >adj[],int s,int d,int wt)
{
    adj[s].push_back(make_pair(d,wt));
    adj[d].push_back(make_pair(s,wt));
}
void printg(vector<pair<int,int> >adj[],int v)
{
    int i;
    for(i=0;i<v;i++)
    {
        cout<<i<<":";
        for(auto j:adj[i])
        {
            cout<<" ->"<<j.first<<","<<j.second;
        }
        cout<<"\n";
    }
}
int main()
{
    int i,j,v,e,s,d,wt;
    cin>>v>>e;
    vector<pair<int,int> >adj[v];
    for(i=0;i<e;i++)
    {
        cin>>s>>d>>wt;
        graph(adj,s,d,wt);
    }
    printg(adj,v);
	return 0;
}
