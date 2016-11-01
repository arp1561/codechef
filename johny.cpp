#include<bits/stdc++.h>
#define int long long
#define in(a,n)  for(int i=0;i<n;i++) cin>>a[i]
#define out(a,n)  for(int i=0;i<n;i++) cout<<a[i]<<" "
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T--)
      {
            int num,pos,n,k; cin>>n;
            int a[n];
            in(a,n);
            cin>>k;
            num=a[k-1];
            sort(a,a+n);
            for(int i=0;i<n;i++)
            {
                  if(a[i]==num)
                  {
                        pos=i;
                        break;
                  }
            }
            cout<<pos+1<<endl;
      }
                  
}
