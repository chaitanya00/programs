#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int i,len;
    len=str.length();
    for(i=1;i<=len;i++)
    {
        cout<<str.substr(0,i)<<" ";
    }
    return 0;
}
