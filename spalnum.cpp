#include<bits/stdc++.h>
#include<string>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int a,b; cin>>a>>b;
        int sum=0;
        for(int i=a;i<=b;i++)
        {
            int temp = i;
            string s = std::to_string(temp);
            string rev = s;
            reverse(rev.begin(),rev.end());
            if(s==rev)
                sum+=i;
                
        }
        cout<<sum<<endl;
    }
}

