#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      while(true)
      {
            int n,flag=1,search; cin>>n;
            if(n==0)
                  break;
            int a[n];
            for(int i=0;i<n;i++) cin>>a[i];
            
            for(int i=0;i<n;i++)
            {
                  int check=a[i];
                  if(a[check-1]!=(i+1))
                  {
                        flag=0;
                        break;
                  }
            }
            (flag)?cout<<"ambiguous\n":cout<<"not ambiguous\n";

      }
}
