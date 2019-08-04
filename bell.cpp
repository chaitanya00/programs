#include<bits/stdc++.h>
using namespace std;
void bellno(int n)
{
    int bell[n+1][n+1],i,j;
    bell[0][0]=1;
    for(i=1;i<=n;i++)
    {
        bell[i][0]=bell[i-1][i-1];
        for(j=1;j<=i;j++)
        {
            bell[i][j]=bell[i-1][j-1]+bell[i][j-1];
        }
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<bell[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    bellno(n);
    return 0;
}
