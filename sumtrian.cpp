#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int t;
      cin>>t;
      while(t>0)
      {
            int n;
            cin>>n;
            int a[n][n]={0};
            for(int i=0;i<n;i++)
                  for(int j=0;j<=i;j++) cin>>a[i][j];
            for(int i=n-2;i>=0;i--) 
                  for(int j=i;j>=0;j--)
                        if(a[i+1][j+1]>a[i+1][j]) 
                              a[i][j]+=a[i+1][j+1];
                        else 
                              a[i][j]+=a[i+1][j];

            cout<<a[0][0]<<"\n";
            for(int i=0;i<n;i++)
                  for(int j=0;j<n;j++)
                        a[i][j]=0;
            t--;
      }
}

      
