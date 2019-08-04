#include<bits/stdc++.h>
using namespace std;
void lpps(string str,int len)
{
    int lps[len][len]={0},i,c,j;
    for(i=0;i<len;i++)
    {
        lps[i][i]=1;
    }
    for(c=2;c<=len;c++)
    {
        for(i=0;i<len-c+1;i++)
        {
            j=i+c-1;
            if(str[i]==str[j] && c==2)
            {
                lps[i][j]=2;
            }
            else if(str[i]==str[j])
            {
                lps[i][j]=lps[i+1][j-1]+2;
            }
            else
            {
                lps[i][j]=max(lps[i+1][j],lps[i][j-1]);
            }
        }
    }
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            cout<<lps[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    string str;
    getline(cin,str);
    int len=str.length();
    lpps(str,len);
}
