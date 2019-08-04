#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m,grid[100][100];
void computesum(int s)
{
    int dp[n+1][m+1]={0};
    int i,j,k,sum=0,f=0,c,count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            dp[i+1][j+1]=dp[i+1][j]+dp[i][j+1]-dp[i][j]+grid[i][j];
        }
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n";
    if(n<m)
    {
        count=n;
    }
    else
    {
        count=m;
    }
    for(k=1;k<=count;k++)
    {
        f=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i+k<=n && j+k<=m)
                {
                    sum=dp[i+k][j+k]-dp[i+k][j]-dp[i][j+k]+dp[i][j];
                    if(sum < s)
                    {
                        f=1;
                        c=k;
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            if(f==1)
            {
                break;
            }
        }
        if(i==n && f==0)
        {
            break;
        }
    }
    cout<<c*c;
}
int main()
{
	int i,j,s;
	cin>>n>>m>>s;
	grid[n][m];
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        cin>>grid[i][j];
	    }
	}
	computesum(s);
	return 0;
}
