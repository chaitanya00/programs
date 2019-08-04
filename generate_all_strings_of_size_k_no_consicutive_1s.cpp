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
    if(str[index-1]!='1')
    {
        str[index]='1';
        getstring(str,index+1,k);
    }
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

/* input: 5

output:
0 1
00 01 10
000 001 010 100 101
0000 0001 0010 0100 0101 1000 1001 1010
00000 00001 00010 00100 00101 01000 01001 01010 10000 10001 10010 10100 10101 */
