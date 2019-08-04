#include<bits/stdc++.h>
using namespace std;

/*void find_min(int a[][m] , queue<pair<int,pair<int,int> > > q)
{
    vector<int>min;
    vector<int>final;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {

            if(a[i][j]==2)
            {
                q.push(make_pair(0,make_pair(i,j)));
                a[i][j]=-1;

            }
        }
    }
    int k=1;
    min[0]=0;
    while(!q.empty())
    {
        index=q.front().first.first;
        i=q.front().second.first;
        j=q.front().second.second;
        a[i][j]=-1;
        q.pop();

        if(i-1<0 && a[i-1][j]==0)
        {
            q.push(make_pair(k,make_pair(i-1,j)));
            min.push_back(min[index]+1);
            k++;

        }
        else
        {
            final.push_back(min[index]);
        }
        if(i+1>n-1 && a[i+1][j]==0)
        {
            q.push(make_pair(k,make_pair(i+1,j)));
            min.push_back(min[index]+1);
            k++;
        }
         else
        {
            final.push_back(min[index]);
        }
        if(j-1<0 && a[i][j-1])
        {
            q.push(make_pair(k,make_pair(i,j-1)));
            min.push_back(min[index]+1);
            k++;
        }
         else
        {
            final.push_back(min[index]);
        }
        if(j+1>m-1 && a[i][j+1])
        {
            q.push(make_pair(k,make_pair(i,j+1)));
            min.push_back(min[index]+1);
            k++;
        }
         else
        {
            final.push_back(min[index]);
        }

    }
    for(auto k:final.begin();k<final;k++)
    {
        cout<<*k<<" ";
    }

}*/
int main()
{
    int i,j,n,m;
    cin>>n>>m;
    int a[n][m];
    queue<pair<int,pair<int,int> > > q;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }



    vector<int> min;
    vector<int> final;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {

            if(a[i][j]==2)
            {
                q.push(make_pair(0,make_pair(i,j)));
                a[i][j]=-1;


            }
        }
    }
    int k=1;
    min.push_back(0);

while(!q.empty())
    {
        auto index=q.front().first;

        auto ii=q.front().second.first;
        auto jj=q.front().second.second;

        q.pop();

        if(ii-1<0 && a[ii-1][jj]==0)
        {
            q.push(make_pair(k,make_pair(ii-1,jj)));
            min.push_back(min[index]+1);
            a[ii-1][jj]=-1;
            k++;

        }
        else if(ii-1<0)
        {
            final.push_back(min[index]);
        }
        if(ii+1>n-1 && a[ii+1][jj]==0)
        {
            q.push(make_pair(k,make_pair(ii+1,jj)));
            min.push_back(min[index]+1);
            a[ii+1][jj]=-1;
            k++;
        }
         else if(ii+1>n-1)
        {
            final.push_back(min[index]);
        }
        if(jj-1<0 && a[ii][jj-1]==0)
        {
            q.push(make_pair(k,make_pair(ii,jj-1)));
            min.push_back(min[index]+1);
            a[ii][jj-1]=-1;
            k++;
        }
         else if(jj-1<0)
        {
            final.push_back(min[index]);
        }
        if(jj+1>m-1 && a[ii][jj+1]==0)
        {
            q.push(make_pair(k,make_pair(i,j+1)));
            min.push_back(min[index]+1);
            a[ii][jj+1]=-1;
            k++;
        }
         else if(jj+1>m-1)
        {
            final.push_back(min[index]);
        }

    }
    for(auto k:final.begin();k<final;k++)
    {
        cout<<*k<<" ";
    }

    return 0;
}
