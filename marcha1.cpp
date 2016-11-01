#include<bits/stdc++.h>
#define int long long
#define in(a,n)  for(int i=0;i<n;i++) cin>>a[i]
#define out(a,n)  for(int i=0;i<n;i++) cout<<a[i]<<" "
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T--)
      {
            int n,m;cin>>n>>m;
            int a[n];
            in(a,n);
            bool subset[m+1][n+1];
            
            for(int i=0;i<=n;i++)
                subset[0][i]=true;
            for(int i=0;i<=m;i++)
                subset[i][0]=false;
            for(int i=1;i<=sum;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    subset[i][j]= subset[i][j-1];
                    if(i>j-1)
                        subset[i][j] = subset[i][j] || subset[i-a[j-1]][j-1];
                }
            }
            cout<<subset[m][n];

        
      
      }
}
