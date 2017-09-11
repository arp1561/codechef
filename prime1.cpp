#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
       int a,b; cin>>a>>b;
       bool prime[b+1];
       memset(prime,true,sizeof(prime));
       for(int p=2;p*p<=b;p++)
       {
            if(prime[p]==true)
                for(int i=p*2;i<=b;i+=p)
                    prime[i]=false;
        }
        if (a==1)
            a+=1;
        for(int i=a;i<=b;i++)
            if(prime[i])
                cout<<i<<"\n";
    }
}






