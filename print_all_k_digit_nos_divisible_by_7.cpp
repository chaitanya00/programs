#include<bits/stdc++.h>
using namespace std;
void getstring(char* str,int index,int k)
{
    if(index>k)
    {
        if(atoi(str)%7==0)
        {
            cout<<str<<" ";
        }
        return;
    }
    for(int i=1;i<=9;i++)
    {
        str[index]=i+'0';
        getstring(str,index+1,k);
    }
    cout<<"\n";
}
int main()
{
    int k,i;
    cin>>k;
    char str[k+1]={0};
    str[k]='\0';

    getstring(str,0,k-1);


}
