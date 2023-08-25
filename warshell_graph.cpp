#include<bits/stdc++.h>
using namespace std;\
const int N=1e5+10;

int main()
{
    int node;
    cin>>node;
    int d[node+1][node+1];
    for(int i=1;i<node;i++)
    {
        for(int j=1;j<=node;j++)
        {
            int k;
            cin>>k;
            if(k!=-1)
            {
                d[i][j]=k;
            }
            else{
                d[i][j]=N;
            }
        }
    }
    for(int k=1;k<=node;k++){
    for(int i=1;i<=node;i++){
      for(int j=1;j<=node;j++){
        d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
      }
    }
  }
  for(int i=1;i<node;i++)
    {
        for(int j=1;j<=node;j++)
        {
            // if(d[i][j]<0)
            // {
            //     cout<<-1<<" ";
            // }
            //else
             cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}