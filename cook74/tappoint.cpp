#include<bits/stdc++.h>
#define int long double
using namespace std;
signed main()
{
      int T; cin>>T;
      while(T--)
      {
            int n,k; cin>>n>>k;
            vector<int> a;
            for(int x=1;x<=k;x++)
            {
                  for(int y=1;y<=k;y++)
                  {
                        if(((x*x)+(y*y))<=k*k && ((x*x)+(y*y))<=n*n)
                        {
                              int temp = n-sqrt(x*x+y*y);
                              a.push_back(temp);
                        }
                  }
            }
            if(a.size()==0)
                  cout<<"-1\n";
            else
            {
                  k/=100;
                  for(vector<int>::iterator it=a.begin();it!=a.end();++it)
                        if(*it<k && *(it+1)>k)
                        {
                              cout<<*it<<endl;
                              break;
                              
                        }
            }
            

      }

}
