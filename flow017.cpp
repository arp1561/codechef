#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T>0)
      {
            vector<int> a(3);
            for(int i=0;i<3;i++) 
            {
                  int x; cin>>x;
                  a.push_back(x);
            }
            nth_element(a.begin(),a.begin()+1,a.end(),greater<int>());
            cout<<a[1]<<endl;

            T--;
      }
}
