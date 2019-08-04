#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	queue<pair<int,int>> q;
	int n,i,j,m,time1=1,f=0;
	cin>>n>>m;
	int a[n][m];
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        cin>>a[i][j];
	    }
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        if(a[i][j]==2)
	        {
	            q.push(make_pair(i,j));
	        }
	    }
	}
	q.push(make_pair(-1,-1));
while(!q.empty())
{
    while(q.front().first!=-1 && q.front().second!=-1)
    {
        i=q.front().first;
        j=q.front().second;
        q.pop();
        if(i-1>=0 && i-1<=n-1 && a[i-1][j]==1)
        {
            a[i-1][j]=2;
            q.push(make_pair(i-1,j));
        }
        if(i+1>=0 && i+1<=n-1 && a[i+1][j]==1)
        {
            a[i+1][j]=2;
            q.push(make_pair(i+1,j));
        }
        if(j-1>=0 && j-1<=m-1 && a[i][j-1]==1)
        {
            a[i][j-1]=2;
            q.push(make_pair(i,j-1));
        }
        if(j+1>=0 && j+1<=m-1 && a[i][j+1]==1)
        {
            a[i][j+1]=2;
            q.push(make_pair(i,j+1));
        }
    }
    q.pop();
    if(!q.empty())
    {
        q.push(make_pair(-1,-1));
        time1++;
    }

}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        if(a[i][j]==1)
        {
            f=1;
            cout<<-1;
            break;
        }
    }
}
if(f==0)
{
    cout<<time1;
}
	return 0;
}
