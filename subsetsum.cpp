#include<bits/stdc++.h>
using namespace std;
void subsetsum(int* subset, int sum,int n)
{
    int possible[n+1][sum+1];
    int i,j;
    for(i=1;i<=sum;i++)
    {
        possible[0][i]=0;
    }
    for(i=0;i<=n;i++)
    {
        possible[i][0]=1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(j<subset[i-1])
            {
                possible[i][j]=possible[i-1][j];
            }
            else
            {
                possible[i][j]=possible[i-1][j]|| possible[i-1][j-subset[i-1]];
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=sum;j++)
        {
            cout<<possible[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n,i,sum;
    cin>>n>>sum;
    int subset[n];
    for(i=0;i<n;i++)
    {
        cin>>subset[i];
    }
    subsetsum(subset,sum,n);
    return 0;

}
