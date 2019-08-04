#include<bits/stdc++.h>
using namespace std;
string pallindrome(string str)
{
    int len=str.length();
    int i=0,j=len-1;
    while(i<j)
    {
        char temp;
        temp=str[i];
        str[i]=str[j];
        i++;
        j--;
    }
    return str;
}
int main()
{
    string str,str1;
    getline(cin,str);
    int f=0;
    while(next_permutation(str.begin(),str.end()))
    {

        str1=pallindrome(str);
        if(str1==str)
        {
            cout<<"yes";
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"no";
    }
}
