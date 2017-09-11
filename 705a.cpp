#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n; cin>>n;
    string s1 = "I hate it";
    string s2 = "I love it";
    string s3 = "I hate that";
    string s4 = "I love that";

    if (n==1) cout<<s1;
    else
    {
        for(int i=1;i<n;i++) (i%2!=0)?cout<<s3<<" ":cout<<s4<<" ";
        (n%2==0)?cout<<s2:cout<<s1;
    }
}
