#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T>0)
      {
            int n; cin>>n;
            vector<int> a;
            for(int i=0;i<n;i++)
            {
                  int x; cin>>x;
                  a.push_back(x);
            }
            sort(a.begin(),a.end());
            cout<<a[0]+a[1]<<endl;
            T--;

      }

}

