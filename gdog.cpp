#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T--)
      {
            int n,k;cin>>n>>k;
            int a[k],p=k;
            for(int i=0;i<k;i++)
            {
                  a[i]=n%p;
                  p--;
            }
            sort(a,a+k);
            cout<<a[k-1]<<endl;
      }
 
 
 
 
}
