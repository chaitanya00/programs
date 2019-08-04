#include<bits/stdc++.h>
using namespace std;
void liss(int a[],int n)
{
    int lis[n],i,j;
    for(i=0;i<n;i++)
    {
        lis[i]=a[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]<=a[i] && lis[i]<lis[j]+a[i])
            {
                lis[i]=lis[j]+a[i];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<lis[i]<<" ";
    }
}
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    liss(a,n);

}
