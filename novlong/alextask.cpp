#include<bits/stdc++.h>
#define int long long 
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int Lcm(int a,int b)
{
    return a*b/gcd(a,b);
}
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        int a[n];
        vector<int> lcm;
        for(int i=0;i<n;i++) cin>>a[i];
    
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                lcm.push_back(Lcm(a[i],a[j]));
       cout<<*min_element(lcm.begin(),lcm.end())<<endl;
    }
}
