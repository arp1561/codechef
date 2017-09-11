#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        string s; cin>>s;
        int length = s.length()-1;
        bool flag=false;
        
        for(int x=length;x>=2;x--)
        {
            for(int i=0;i<s.length()-x;i++)
            {
               string temp = s.substr(i,x);
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

