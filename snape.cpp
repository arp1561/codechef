#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T>0)
      {
            int a,b; cin>>a>>b;
            cout<<sqrt(b*b-a*a)<<" "<<sqrt(b*b+a*a)<<endl;
            T--;
      }
}



