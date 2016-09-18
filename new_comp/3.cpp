#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T--)
      {
            string s; cin>>s;
            int count=0,j;
            for(int i=0;i<s.length();i+=j)
            {
                  j=i;
                  count=0;
                  while(s[i]==s[j])
                  {
                        count++;
                        j++;
                  }
                  if(count==0)
                        cout<<s[i];
                  else
                        cout<<s[i]<<count;
            }
            cout<<endl;

      }
}
