#include<bits/stdc++.h>
# define max1 1000
using namespace std;
int a[max1][max1];
int n,m;
int region(int i,int j)
{
    if((i<0)||(j<0)||(i>n-1)||(j>m-1)||(a[i][j]!=1))
    {
        return 0;
    }
    a[i][j]=-1;
    return region(i-1,j)+region(i+1,j)+region(i,j-1)+region(i,j+1)+1;
}
int main()
{
    int i,j,c,max=INT_MIN;
    cin>>n>>m;
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
            if(a[i][j]==1)
            {
               c= region(i,j);
            }
            if(max<c)
            {
                max=c;
            }
        }
    }
    cout<<max;
}
