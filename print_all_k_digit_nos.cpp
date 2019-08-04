#include<bits/stdc++.h>
using namespace std;
void getstring(char* str,int index,int k)
{
    if(index>k)
    {
        cout<<str<<" ";
        return;
    }
    for(int i=1;i<=9;i++)
    {
        str[index]=i+'0';
        getstring(str,index+1,k);
    }
    cout<<"\n";
}
int main()
{
    int k,i;
    cin>>k;
    char str[k+1]={0};
    str[k]='\0';

    getstring(str,0,k-1);


}
/*
input: 2
output:

11 12 13 14 15 16 17 18 19
21 22 23 24 25 26 27 28 29
31 32 33 34 35 36 37 38 39
41 42 43 44 45 46 47 48 49
51 52 53 54 55 56 57 58 59
61 62 63 64 65 66 67 68 69
71 72 73 74 75 76 77 78 79
81 82 83 84 85 86 87 88 89
91 92 93 94 95 96 97 98 99

*/
