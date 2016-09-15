#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T>0)
      {
            string s; cin>>s;
            cout<<(int)s[0]-'0'+(int)s[s.length()-1]-'0'<<endl;
            T--; 
      }
}

