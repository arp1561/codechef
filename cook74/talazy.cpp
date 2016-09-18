#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T--)
      {
            int n,b,m; cin>>n>>b>>m;
            int sum=0;
            int i=1;
            int temp;            
            while(true)
            {
                  if(n%2!=0)
                  {
                        temp = (n+1)/2;
                        sum+=temp*i*m;
                        n-=temp;
                  }
                  else
                  {
                        temp = n/2;
                        sum+=temp*i*m;
                        n-=temp;
                        
                  }
                  if(n==0)
                        break;
                  else
                        sum+=b;
                  i*=2;

            }
            cout<<sum<<endl;
      }
}
