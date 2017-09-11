#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        n+=1;
        while(true)
        {
            string s = to_string(n);
            string temp = s;
            reverse(temp.begin(),temp.end());
            if(temp==s)
                break;
            else
                n++;
        }
        cout<<n<<endl;
    }
}
