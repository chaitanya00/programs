#include<bits/stdc++.h>
using namespace std;
int gs(int* subset,char* str,int index,int k,int m)
{
    int static f=0;
    if(index>k)
    {int f1=0;
        int  sum=0;
        for(int i=0;i<index;i++)
        {
            if(str[i]=='1')
            {
                sum+=subset[i];
                f1=1;

            }
        }
        if(f1==1 && sum%m==0)
        {
           f=1;
        }

        return 0;
    }
    str[index]='0';
    gs(subset,str,index+1,k,m);
    str[index]='1';
    gs(subset,str,index+1,k,m);
    return f;
}
int main()
{
   int k,i=0,j,space=0,t,m;
     cin>>t;
     while(t--)
     {
        cin>>k>>m;
        int subset[k];
        for(i=0;i<=k;i++)
        {
            cin>>subset[i];
        }

        char str[k+1]={0};
        str[k]='\0';

       cout<<gs(subset,str,0,k-1,m)<<"\n";
       }

}
