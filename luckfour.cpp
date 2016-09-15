#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T>0)
      {
            string s; cin>>s;
            int count=0;
            for(int i=0;i<s.length();i++)
            {
                  if(s[i]=='4')
                        count++;
            }

            cout<<count<<"\n";
            T--;
      }
}

