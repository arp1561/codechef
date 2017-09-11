#include<bits/stdc++.h>
#define int long long
using namespace std;
int combine(int a, int b) {
   int times = 1;
   while (times <= b)
      times *= 10;
   return a*times + b;
} 
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int n,a,m; cin>>a>>n>>m;
        int num=0;
        for(int i=0;i<n;i++)
            num=combine(num,a);
        cout<<num%m<<endl;
    }
}
