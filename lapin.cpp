#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        string s; cin>>s;
        if(s.length()%2==0)
        {
            int mid = (s.length()-1)/2;
            string temp1 = s.substr(0,mid+1);
            string temp2 = s.substr(mid+1,mid+1);
            sort(temp1.begin(),temp1.end());
            sort(temp2.begin(),temp2.end());
            if(temp1.compare(temp2)==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else
        {
            int mid = (s.length()-1)/2;
            string temp1 = s.substr(0,mid);
            string temp2 = s.substr(mid+1,mid+1);
            sort(temp1.begin(),temp1.end());
            sort(temp2.begin(),temp2.end());
            if(temp1.compare(temp2)==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
