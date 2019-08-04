#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void lis(string str,int len)
{
    int length[len];
    int i,j;
    length[0]=1;
    for(i=1;i<len;i++)
    {
        length[i]=1;
        for(j=0;j<i;j++)
        {
            if(str[j]<=str[i] && length[i]<length[j]+1)
            {
                length[i]=length[j]+1;
            }
        }
    }
    for(i=0;i<len;i++)
    {
        cout<<length[i]<<" ";
    }
}

int main()
{
	string str;
	getline(cin,str);
	int len;
	len=str.length();
	lis(str,len);
	return 0;
}
