#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{

      int T; cin>>T;
      while(T--)
      {

            vector<int> v={100,50,10,5,2,1};
            int n; cin>>n;
            int i=0,c=0;
            while(i<v.size() && n)
            {
                  if(v[i]>n)
                        i++;
                  else
                  {
                        c+=n/v[i];
                        n%=v[i];
                  }
            }
            cout<<c<<endl;
      }
}

