#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
getline(cin,str);
int pana[26]={0},i,f=0;
for(i=0;i<str.length();i++)
{
    pana[str[i]-'a']++;
}
for(i=0;i<26;i++)
{
    if(pana[i]==0)
    {
        f=1;
        break;
    }
}
if(f==1)
{
    cout<<"not panagram";
}
else
{
    cout<<"panagaram";
}
}
