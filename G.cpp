#include<bits/stdc++.h>
using namespace std;
const int N=35;
 int a[N][N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;

    a[1][1]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {

            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {

           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
