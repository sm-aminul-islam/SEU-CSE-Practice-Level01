#include<bits/stdc++.h>
using namespace std;



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int cnt=0;
    for(int i=1;i<=s.size()-2;i++)
    {
        cnt++;
    }

     cout<<s[0]<<cnt<<s[s.size()-1];


    return 0;
}
