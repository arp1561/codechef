#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T--)
      {
            int n,count=0,sum=0; cin>>n;
            for(int i=1;i<=n;i+=9)
            {
                  sum++;
            }
            cout<<sum;
      }

}
