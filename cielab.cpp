#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int a,b; cin>>a>>b;
      int n = a-b;
      int i=0;
      while(n>0)
      {
            int temp = n%10;
            
            if(temp >0)
            {
              cout<<n-pow(10,i)<<endl;
              break;

            }
            i++;
            n/=10;

      }
      
}

