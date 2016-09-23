#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T--)
      {
            float n,k;cin>>n>>k;
            (n<=1000)?cout<<fixed<<setprecision(6)<<n*k<<endl:cout<<fixed<<setprecision(6)<<((n*k)-(0.1*(n*k)))<<endl;
      }

}
