#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T>0)
      {
            int n; cin>>n;
            int temp=1;

            for(int i=n;i>0;i--)
                  temp*=i;
            cout<<temp<<endl;
            T--;
      }
}

