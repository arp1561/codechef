#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T--)
      {
            string s,t,r; cin>>s;
            t=s;
            set<string> orig,rev;
            int count=0;
            for(int i=0;i<s.length();i++)
            {

                 if(s[i]!='Z') 
                 for(char j=s[i];j<='Z';j++)
                 {
                        t[i]=j;
                        orig.insert(t);
                        
                        string rev_s = s,rev_t =t;
                        
                        //reverse(rev_s.begin(),rev_s.end());
                        reverse(rev_t.begin(),rev_t.end());
                       // cout<<t<<"->"<<rev_t<<"->"<<s<<"->";
                        
                        rev.insert(rev_t);
                        /*
                        if(t>s && rev_t>s)
                              count++;
                        cout<<count<<" ";
                        */

                            

                 
                 }

            }
                 cout<<orig.size()<<" "<<rev.size(); 

      }
                  

}
