#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,n,n1,j;
	cin>>n>>n1;
	int a[n],b[n1];

	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(j=0;j<n1;j++)
	{
	    cin>>b[j];
	}
	unordered_map<int,int> m;

	for(i=0;i<n;i++)
	{
	    m[a[i]]++;
	}

	for(j=0;j<n1;j++)
	{
	    if(m.find(b[j])==m.end())
	    {
	        cout<<b[j]<<" ";
	    }
	}
	for(auto it=m.begin();it!=m.end();it++)
	{
	    cout<<it->first<<" ";
	}
	return 0;
}
