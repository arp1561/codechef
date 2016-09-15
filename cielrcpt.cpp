#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
      int T;
      cin>>T;
      while(T>0)
      {
            int n,i=11,sum=0,check=0;
            cin>>n;
            while(true)
            {
                  check=0;
                  if(n<pow(2,i))
                        i--;
                  else if(n==0)
                        break;
                  else
                  {
                        check=n/pow(2,i);
                        sum+=n/pow(2,i);
                        n-=check*pow(2,i);

                  }
            }

            cout<<sum<<endl;
            T--;




      }
}

