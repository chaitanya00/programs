#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	unordered_map<int, int> m;
	/*for(i=0;i<n;i++)
	{
	    m[a[i]]++;
	}
	bool flage=false;
	for(auto k=m.begin();k!=m.end();k++)
	{
	    if(k->second>1)
	    {
	    cout<<k->first<<" ";
	    flage=true;
	    }
	}
	if(flage==false)
	{
	    cout<<"no duplicate elemets";
	}*/ // unordered_map to store frequencies
    unordered_map<int, int> freq;
    for (int i=0; i<n; i++)
        freq[a[i]]++;

    bool dup = false;
    unordered_map<int, int>:: iterator itr;
    for (itr=freq.begin(); itr!=freq.end(); itr++)
    {
        // if frequency is more than 1
        // print the element
        if (itr->second > 1)
        {
            cout << itr->first << " ";
            dup = true;
        }
    }

    // no duplicates present
    if (dup == false)
        cout << "-1";
	return 0;
}

