#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int j,n; cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=1;i<=n;i++)
    {
        int temp = i;
        for(j=0;j<n;j++) if(temp==a[j]) break;
        b[i-1]=j+1;
    }
    for(int i=0;i<n;i++) cout<<b[i]<<" ";
}

