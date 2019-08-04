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
    for(int i=0;i<v;i++)
    {
        cout<<i<<":";
        for(auto j:adj[i])
        {
            cout<<" ->"<<j.first<<","<<j.second;
        }
        cout<<"\n";
    }
}
void bfs(vector<pair<int,int> >adj[],int s,queue<int> q,int v,int visited[])
{

    q.push(s);
    visited[s]=1;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        s=q.front();
        q.pop();
        for(auto j:adj[s])
        {
            if(visited[j.first]==0)
            {
                visited[j.first]=1;
                q.push(j.first);
            }

        }
    }
    cout<<"\n";
}
int main()
{
	int v,e,i,s,d,wt,src;

	cin>>v>>e;
	int visited[v]={0};
	queue<int>q;
	vector<pair<int,int> >adj[v];
	for(i=0;i<e;i++)
	{
	    cin>>s>>d>>wt;
	    graph(adj,s,d,wt);
	}
	//printg(adj,v);
	cin>>src;
	bfs(adj,src,q,v,visited);
	for(i=0;i<v;i++)
	{
	    if(visited[i]==0)
	    {
	        cout<<i<<" ";
	    }
	}
	return 0;
}
