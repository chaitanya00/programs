#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void coinchange(int* change,int coin,int n)
{
    int ways[n+1][coin+1];
    int i,j;
    for(i=0;i<=coin;i++)
    {
        ways[0][i]=0;
    }
    for(j=0;j<=n;j++)
    {
        ways[j][0]=1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=coin;j++)
        {
            if(change[i-1]>j)
            {
                ways[i][j]=ways[i-1][j];
            }
            else
            {
                ways[i][j]=ways[i-1][j]+ways[i][j-change[i-1]];
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=coin;j++)
        {
            cout<<ways[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
	int n,coin,i;
	cin>>n>>coin;
	int change[n];
	for(i=0;i<n;i++)
	{
	    cin>>change[i];
	}
	coinchange(change,coin,n);

	return 0;
}
