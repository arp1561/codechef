#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=1;i<=n;i++)
             a[i-1]=i*3;

        for(int i=0;i<n-1;i++)
        {
            int sum=a[i]+a[i+1];
            for(int j=0;j<n;j++)
            {
                if(sum==a[j])
                    a[j]+=1;
            }
        }
    
        for(int i=0;i<n;i++)
            cout<<a[i];
    
    cout<<"\n";
    }
}
        
