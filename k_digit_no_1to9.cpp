#include<bits/stdc++.h>
using namespace std;
void gs(char* str,int index,int k)
{
    if(index>k)
    {
        cout<<str<<" ";
        return;
    }
    for(int i=1;i<=9;i++)
    {
        str[index]=i+'0';
        gs(str,index+1,k);
    }
    cout<<"\n";
}
int main()
{
    int k;
    cin>>k;
    char str[k+1]={0};
    str[k]='\0';
    gs(str,0,k-1);
}
