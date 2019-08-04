#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ii,l=0,u=0,n,len=0,maxlen=INT_MIN,f=0,jj;
    cin>>n;
    char str[n];
    cin>>str;
    //cout<<str;
    f=0;
    for(ii=0;ii<n;ii++)
    {
        if(str[ii]>='0' && str[ii]<='9' && f==0)
        {
            l=ii;
            u=ii;
            f=1;
            len++;
        }
        else if(str[ii]>='0' && str[ii]<='9')
        {
            u++;
            len++;
        }
        else if(f==1 && !(str[ii]>='0' && str[ii]<='9'))
        {
            f=0;
          //  cout<<len<<" "<<maxlen<<"\n";
            if(len==maxlen)
            {
                for(jj=l;jj<=u;jj++)
                {
                    printf("%c",str[jj]);
                }
                cout<<"\n";
            }
            len=0;
        }
        if(maxlen<len)
        {
            maxlen=len;

        }


    }
    cout<<maxlen;
}
