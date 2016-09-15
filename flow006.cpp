#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T>0)
      {
            int n,temp,sum=0; cin>>n;
            while(n>0)
            {
                  temp=n%10;
                  sum+=temp;
                  n/=10;
            }

            cout<<sum<<endl;
            T--;
      }
}



