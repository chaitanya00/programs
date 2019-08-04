#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1,temp;
    getline(cin,str);
    int i,j,len,mid,f=0;
    len=str.length();
    temp=str.substr(0,len/2);
    mid=len/2;
    int x=mid+(len%2);
   // cout<<mid<<" "<<temp;
    for(i=mid;i<len;i++)
    {
        str1=str.substr(i,x);

        if(temp.find(str1)==0)
        {
            cout<<x<<" ";
            f=1;
            break;
        }
        x--;
    }
    if(f==0)
    {
        cout<<"0";
    }

}
