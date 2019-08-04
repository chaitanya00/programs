#include <iostream>

#include<bits/stdc++.h>
using namespace std;
int n,m;
/*void mincostpath(cost[n][m])
{
    int mincost[n][m],i,j;
    mincost[0][0]=cost[0][0];
    for(i=1;i<m;i++)
    {
        mincost[0][i]=mincost[0][i-1]+cost[0][i];
    }
    for(i=1;i<n;i++)
    {
        mincost[i][0]=mincost[i-1][0]+cost[0][i];
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<m;j++)
        {
            mincost[i][j]=min(mincost[i-1][j],mincost[i][j-1])+cost[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<mincost[i][j]<<" ";
        }
        cout<<"\n";
    }
}*/
int main()
{
    int i,j;
    cin>>n>>m;
    int cost[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>cost[i][j];
        }
    }
   // mincostpath(cost);


   int mincost[n][m];
    mincost[0][0]=cost[0][0];
    for(i=1;i<m;i++)
    {
        mincost[0][i]=mincost[0][i-1]+cost[0][i];
    }
    for(i=1;i<n;i++)
    {
        mincost[i][0]=mincost[i-1][0]+cost[0][i];
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<m;j++)
        {
            mincost[i][j]=min(mincost[i-1][j],mincost[i][j-1])+cost[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<mincost[i][j]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}
