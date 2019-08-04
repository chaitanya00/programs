#include<bits/stdc++.h>
using namespace std;
void valid(string str,int len)
{
    int lvs[len],i,j;
    for(i=0;i<len;i++)
    {
        lvs[i]=0;
    }
    for(i=1;i<len;i++)
    {
        if(str[i]==')' && i-lvs[i-1]-1>=0 && str[i-lvs[i-1]-1]=='(')
        {
            lvs[i]=lvs[i-1]+2;

            if(i-lvs[i-1]-2>=0)
            {
                lvs[i]+=lvs[i-lvs[i-1]-2];
            }
        }
    }
    for(i=0;i<len;i++)
    {
        cout<<lvs[i]<<" ";
    }

}
int main()
{
    string str;
    getline(cin,str);
    int len=str.length();
    valid(str,len);
}
