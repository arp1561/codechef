#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T--)
      {
            int count=0,n; cin>>n;
            set<int> b;
            int a[n];
            for(int i=0;i<n;i++) 
            {
                  cin>>a[i];
            }
            sort(a,a+n);

            for(int i=0;i<n;i++) b.insert(a[i]);
            

            for(set<int>::iterator it=b.begin();it!=b.end();++it)
            {
                  count=0;
                  for(int j=0;j<n;j++)
                        if(a[j]==*it)
                              count++;

                  cout<<*it<<":"<<" "<<count<<endl;
                  
            }

      }
}

