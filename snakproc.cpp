#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        string s; cin>>s;
        string a,b,c;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='H')   a.push_back(s[i]);
            else if(s[i]=='T') b.push_back(s[i]);
            else c.push_back(s[i]);
        }
        if(a.length()==b.length()) cout<<"Valid\n";
        else if(a.length()!=b.length()) cout<<"Invalid\n";
        else if(a.length()==0 && b.length()==0 && c.length()>0) cout<<"Valid\n";

    }
}
