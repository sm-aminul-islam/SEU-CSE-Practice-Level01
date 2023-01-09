#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

   int a,b,c,temp;
   cin>>a>>b>>c;
   temp=b;
   if(a>b)
   {
       swap(a,b);
   }
   if(a>c)
   {
       swap(a,c);
   }
   if(b>c)
   {
       swap(b,c);
   }
   if(temp==b)
   {
       cout<<"Yes"<<"\n";
   }
   else{
    cout<<"No"<<"\n";
   }


    return 0;
}
