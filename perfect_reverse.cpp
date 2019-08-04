#include<bits/stdc++.h>
using namespace std;
string reverse(string s)
{
    int i=0,j=s.length()-1;
    while(i<j)
    {
        char temp;
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    return s;

}
int main()
{
    string str,s,s1;
    int i,j,f=0;
    getline(cin,str);
    int length=str.length();
    for(i=0;i<=length;i++)
    {
        f=0;
        for(j=1;j<=length-i;j++)
        {
            s=str.substr(i,j);
            s1=reverse(s);
            if(str.find(s1)>(length-1))
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            break;
        }
    }
    if(f==0)
    {
        cout<<"perfect reverse";
    }
    else
    {
        cout<<"not perfect";
    }
}
