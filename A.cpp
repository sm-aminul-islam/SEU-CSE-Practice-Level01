#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int w,h,r,c;
    cin>>w>>h>>r>>c;
    pair<int ,int > vt[w+1][h+1];
    for(int i=1;i<=w;i++)
    {
        for(int j=1;j<=h;j++)
        {
            vt[i][j]={i,j};
        }
    }


    auto valid=[&] (int x,int y){
     return x>=1 && x<=w && y>=1 && y<=h;
    };
    int cnt=0;
    if(valid(r-1,c))
    {
        if((abs(r-vt[r-1][c].first)+abs(c-vt[r-1][c].second))==1)
        {
            cnt++;
        }

    }
    if(valid(r+1,c))
    {
         if((abs(r-vt[r+1][c].first)+abs(c-vt[r+1][c].second))==1)
        {
            cnt++;
        }
    }
     if(valid(r,c-1))
    {
         if((abs(r-vt[r][c-1].first)+abs(c-vt[r][c-1].second))==1)
        {
            cnt++;
        }
    }
   if(valid(r,c+1))
    {
         if((abs(r-vt[r][c+1].first)+abs(c-vt[r][c+1].second))==1)
        {
            cnt++;
        }
    }
    cout<<cnt<<"\n";

    return 0;
}
