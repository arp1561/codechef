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
            for(int i=0;i<n;i++) cin>>a[i];

            if(n==2)
                  cout<<a[0]<<endl;
            else
            {
                  int diff = a[1]-a[0];
                  for(int i=1;i<n-1;i++)
                  {
                        if(a[i+1]-a[i]==diff)
                              continue;
                        else
                        {
                              
                        }
                  }
            }
            
                  
           

      }

}
