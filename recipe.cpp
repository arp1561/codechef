#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T>0)
      {
            int n,i,flag; cin>>n;
            int a[n];
            for(i=0;i<n;i++) cin>>a[i];
            for(i=*max_element(a,a+n);i>=2;i--)
            {
                  flag=1;
                  for(int j=0;j<n;j++)
                        if(a[j]%i!=0) 
                         {
                               flag=0;break;
                         }
                  if(flag==1)
                        break;
                 if(flag==0 && i==2)
                 {
                       i=1;
                       break;
                 }
            }
            for(int x=0;x<n;x++)
                  a[x]/=i;
            for(i=0;i<n;i++)
                  cout<<a[i]<<" ";
            cout<<endl;
            T--;
      }
}
                  
                        
            

