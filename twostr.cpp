#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{   
    int T; cin>>T;
    while(T--)
    {
        string a,b; cin>>a>>b;
        int flag=0;
        for(int i=0;i<a.length();i++)
        {   
            if(isalpha(a[i]) && isalpha(b[i]) && a[i]!=b[i]) break;
            else if(isalpha(a[i]) && isalpha(b[i]) && a[i]==b[i]) continue;
            else if(a[i]=='?')  a[i]=b[i];
            else if(b[i]=='?')  b[i]=a[i];
        }
        if(a==b) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
