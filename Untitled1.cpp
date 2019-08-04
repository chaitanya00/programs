#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,n,max=INT_MIN,min=INT_MAX,max1,min1;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i=i+2)
	{
	   if(a[i]>a[i+1])
	   {
	       max1=a[i];
	       min1=a[i+1];
	   }
	   if(max1>max)
	   {
	       max=max1;
	   }
	   if(min1<min)
	   {
	       min=min1;
	   }
	}
	cout<<max<<" "<<min;
	return 0;
}
