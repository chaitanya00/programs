#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int i,len,j=0;
    len=str.length();
   for(i=len;i>=1;i--)
   {
       cout<<str.substr(j,i)<<" ";
       j++;
   }
    return 0;
}
