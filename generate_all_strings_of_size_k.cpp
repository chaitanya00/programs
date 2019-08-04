#include<bits/stdc++.h>
using namespace std;
void getstring(char* str,int index,int k)
{
    if(index>k)
    {
        cout<<str<<" ";
        return;
    }
    str[index]='0';
    getstring(str,index+1,k);
    str[index]='1';
    getstring(str,index+1,k);
}
int main()
{
    int k,i;
    cin>>k;
    char str[k+1]={0};
    str[k]='\0';
    for(i=1;i<=k;i++)
    {
        getstring(str,0,i-1);
        cout<<"\n";
    }
}
/*
input: k: 4;
output:

0 1
00 01 10 11
000 001 010 011 100 101 110 111
0000 0001 0010 0011 0100 0101 0110 0111 1000 1001 1010 1011 1100 1101 1110 1111 */
