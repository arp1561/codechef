#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int a,b,m; cin>>a>>b>>m;
        int lower = (a+m-1)/m;
        int upper = b/m;
        int d = upper-lower+1;
        cout<<d<<endl;
    }
}
