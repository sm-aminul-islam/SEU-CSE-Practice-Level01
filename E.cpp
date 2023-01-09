#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int r,c;
    cin>>r>>c;
    int arr[3][3];
    for(int i=1;i<3;i++)
    {
        for(int j=1;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<arr[r][c]<<endl;
    return 0;
}
