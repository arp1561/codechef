#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{   
    int T; cin>>T;
    while(T--)
    {
        string a,b; cin>>a>>b;
        int count1=0,count2=0;
        
        for(int i=0;i<a.length();i++) if(a[i]!=b[i] && a[i]!='?' && b[i]!='?') count1++;
        for(int i=0;i<a.length();i++) if(a[i]!=b[i] || a[i]=='?' && b[i]=='?') count2++;

        cout<<count1<<" "<<count2<<endl;
    }
}
