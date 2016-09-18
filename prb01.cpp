#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T--)
      {
            int n,flag=1; cin>>n;
            for(int i=2;i<=n/2;i++)
            {
                  if(n%i==0)
                  {
                        flag=0;
                        break;
                  }

            }
            if(flag)
                  cout<<"yes\n";
            else
                  cout<<"no\n";

      }
            


}
