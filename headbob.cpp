#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T--)
      {
            int n,flag=0;cin>>n;
            string s; cin>>s;
            for(int i=0;i<s.length();i++)
            {
                  if(s[i]=='I')
                  {
                        flag=-1;
                        break;
                  }
                  else if(s[i]=='Y')
                        flag=1;

            }
            if(flag==0)
                  cout<<"NOT SURE\n";
            else if(flag==-1)
                  cout<<"INDIAN\n";
            else 
                  cout<<"NOT INDIAN\n";
            
      }

                  

      
}
