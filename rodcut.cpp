#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void cutrod(int* price,int len)
{
    int profit[len+1][len+1];
    int i,j;
    for(i=0;i<=len;i++)
    {
        profit[0][i]=0;
    }
    for(i=0;i<=len;i++)
    {
        profit[i][0]=0;
    }
    for(i=1;i<=len;i++)
    {
        profit[1][i]=i*price[0];
    }
    for(i=2;i<=len;i++)
    {
        for(j=1;j<=len;j++)
        {
            if(i>j)
            {
                profit[i][j]=profit[i-1][j];
            }
            else if(i==j)
            {
                profit[i][j]=max(profit[i-1][j],price[i-1]);
            }
            else
            {
                profit[i][j]=max(profit[i-1][j],profit[i][i]+profit[i][j-i]);
            }
        }
    }
    for(i=0;i<=len;i++)
    {
        for(j=0;j<=len;j++)
        {
            cout<<profit[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
int len,i;
cin>>len;
int price[len];
for(i=0;i<len;i++)
{
    cin>>price[i];
}
	cutrod(price,len);
	return 0;
}
