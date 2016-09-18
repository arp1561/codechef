#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T--)
      {
            int n,ans=0; cin>>n;
            while(n>0)
            {
                  ans+=(n-2)/2;
                  n-=2;
            }
            cout<<ans<<endl;
      }


      


}
