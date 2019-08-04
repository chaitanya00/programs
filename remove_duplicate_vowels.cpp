#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1="";
    getline(cin,str);
    int i=1,j,len;
    queue<char> q;
    q.push(str[0]);
    while(str[i]!='\0')
    {
        if((q.back()=='a'||q.back()=='e'||q.back()=='i'|| q.back()=='o'||q.back()=='u') && (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'))
        {
            i++;
        }
        else
        {
            q.push(str[i]);
            i++;
        }
    }
    while(!q.empty())
    {
        str1+=q.front();
        q.pop();

    }
    cout<<str1;
}
