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
      
            
            int diff = INT_MAX;
            for(int i=0;i<n;i++)
            {
                  for(int j=i+1;j<n;j++)
                  {
                        if(abs(a[i]-a[j])<diff)
                              diff = abs(a[i]-a[j]);
                  }
      
            
             }
 
            cout<<diff<<endl;
      }
 
 
 
 
}
 
