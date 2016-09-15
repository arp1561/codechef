#include<bits/stdc++.h>
#define int long long
using namespace std;
bool check(int dx,int dy,int r)
{
      return dx*dx + dy*dy <=r*r;
}
signed main()
{
      int T; cin>>T;
      while(T>0)
      {
            int n,final=0; cin>>n;
            int x[3],y[3],d[3];
            for(int i=0;i<3;i++) cin>>x[i]>>y[i];

            if(check(x[0]-x[1],y[0]-y[1],n)) final++;
            if(check(x[0]-x[2],y[0]-y[2],n)) final++;
            if(check(x[1]-x[2],y[1]-y[2],n)) final++;
            
            if(final>1)
                  cout<<"yes\n";
            else
                  cout<<"no\n";



            

            T--;
     }
    
     
}




