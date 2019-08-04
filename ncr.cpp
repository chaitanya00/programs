#include<bits/stdc++.h>
using namespace std;
void combination(int n,int r)
{
    int price[n+1][r+1],i,j;
     for(i=0;i<=r;i++)
    {
        price[0][i]=0;
    }
    for(i=0;i<=n;i++)
    {
        price[i][0]=1;
    }


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=r;j++)
        {
            price[i][j]=price[i-1][j-1]+price[i-1][j];
        }
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=r;j++)
        {
            cout<<price[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n,i,j,r;
    cin>>n>>r;
    combination(n,r);
    return 0;
}
