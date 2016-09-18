#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T--)
      {
            string s,t; cin>>s;
            string::size_type sz;
            t=s;
             reverse(s.begin(),s.end());
            if(stoi(t,&sz)==stoi(s,&sz))
                  cout<<"wins\n";
            else
                  cout<<"losses\n";


      }

}
