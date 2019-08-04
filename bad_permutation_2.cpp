#include<bits/stdc++.h>
using namespace std;
void gs(string str,char* str1,int index,int len)
{
    if(index>len)
    {
        int f=0;
        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<=len;j++)
            {
                if(abs(str1[i]-str1[j])==0)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==0)
        {
            cout<<str1<<"\n";
        }
        return;
    }
    for(int i=0;i<=len;i++)
    {
        str1[index]=str[i];
        gs(str,str1,index+1,len);
    }
}

int main()
{
    string str;
    getline(cin,str);
    int n;
    n=str.length();
    char str1[n+1]={0};
    /*for(int i=1;i<=n;i++)
    {
        str1[i-1]=0;
        str1[i]='\0';
       gs(str,str1,0,i-1,n-1);
    }*/
    gs(str,str1,0,n-1);

}
