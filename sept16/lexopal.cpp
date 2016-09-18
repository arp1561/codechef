#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T>0)
      {
            string s; cin>>s;
            
            if(s.length()%2==0)
            {
                  int flag=1;
                  for(int i=0,j=s.length()-1;i<s.length()/2,j>=s.length();i++,j--)
                  {

                        if(s[i]=='.')
                              s[i]=s[j];
                        else if(s[j]=='.')
                              s[j]=s[i];
                        else if(s[i]!=s[j])
                        {
                             flag=0;
                             break;
                        }
                  }
                  if(flag==1)
                        cout<<s;
                  else
                        cout<<"-1";
            }
            T--;
      }
}


             
