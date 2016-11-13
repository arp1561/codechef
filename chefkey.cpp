#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int count=0,n,m,c; cin>>n>>m>>c;
        for(int i=1;i<=n;i++)
        {
            if(c%i==0 && c/i<=m)
                count++;
        }
        cout<<count<<endl;
        
    }
}

