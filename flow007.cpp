#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T>0)
      {
            string s; cin>>s;
            string::size_type sz;
            reverse(s.begin(),s.end());
            cout<<stoi(s,&sz)<<endl;
            T--;
            
      }
}
