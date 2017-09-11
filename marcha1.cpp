#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        int m; cin>>m;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int sols[n*n][n];

        cout<<endl;

        for(int i=0;i<n*n;i++)
        {
            for(int j=0;j<n;j++)
                sols[i][j]=0;
        }
        for(int i=0;i<n*n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<sols[i][j]<<" ";
            cout<<endl;
        }
    }
}
