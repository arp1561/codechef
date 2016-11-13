#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int count=0,a,b,c,d; cin>>a>>b>>c>>d;
        for(int i=a;i<=b && i<=d;i++)
                (i<c)?count+=d-c+1:count+=d-i;
        cout<<count<<endl;
    }


}
