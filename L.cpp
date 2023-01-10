#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     int x;
     cin>>x;
     if(x%5==0)
     {
         cout<<x/5<<"\n";
     }
     else
     {

         cout<<(x/5)+1<<"\n";
     }
    return 0;
}
