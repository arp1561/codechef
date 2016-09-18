#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T>0)
      {
            int count_o=0,count_z=0;
            string s;
            cin>>s;
            for(int i=0;i<s.length();i++)
            {
                  if(s[i]=='0')
                        count_z++;
                  else 
                        count_o++;
            }
            if(count_o==s.length()-1 || count_z==s.length()-1)
                  cout<<"Yes\n";
            else
                  cout<<"No\n";
            T--;
      }
}

