#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int n,s; cin>>n>>s;
        int a[n];
        int k;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            k = a[i];
            int len = n-i;
            if((len*k)==s)
                break;
        }
        cout<<k<<endl;

    }
}
