#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T--)
      {
            int n,m; cin>>n>>m;
            int a[m];
            bool arr[n],chance=true;
            vector<int> chef,assis;
                  
            
            fill_n(arr,n,true);
            for(int i=0;i<m;i++) cin>>a[i];
            sort(a,a+m);

            for(int i=0;i<m;i++)
            { 
                 int temp=a[i];
                 arr[temp-1]=false;
            }
            for(int i=0;i<n;i++)
            {
                  if(arr[i]==true)
                  {
                        if(chance==true)
                        {
                              chef.push_back((i+1));
                              chance=!chance;
                                          
                        }
                        else
                        {
                              assis.push_back((i+1));
                              chance=!chance;
                        }
                  }     
            
            }
            for(vector<int>::iterator it=chef.begin();it!=chef.end();++it)
                  cout<<*it<<" ";
            cout<<endl;
            for(vector<int>::iterator it=assis.begin();it!=assis.end();++it)
                  cout<<*it<<" ";
            cout<<endl;

      }
}
