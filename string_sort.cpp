#include<bits/stdc++.h>
using namespace std;
bool compare(string str1,string str2)
{

    return str1.size()>str2.size();
}
int main()
{
    string arr[]={"baman class","arn","z"};

    sort(arr,arr+3,compare);
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
}
