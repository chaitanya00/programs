#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int getstring(char* str,int index, int k)
{
    static int c=0;
    if(index>k)
    {
        int f=0;
        for(int i=0;i<k-1;i++)
        {
            if(str[i+1]-str[i+1]==1)
            {
                f=1;
            }
        }
        if(f==0)
        {


            c++;


        }
        return 0;

    }
    for(int i=index;i<=k;i++)
    {
        swap((str+index),(str+i));
        getstring(str, index+1, k);
        swap((str+index),(str+i));
    }
   return c;
}
int main()
{
	int n,c=0,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    if(n%i==0)
	    {
	        c++;
	    }
	}
	char str[c+1]={0};
	str[c]='\0';
	for(i=0;i<c;i++)
	{
	    str[i]=(i+1)+'0';
	}

    cout<<getstring(str,0,c-1);
	return 0;
}
