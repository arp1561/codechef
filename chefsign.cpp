#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        string s; cin>>s;
        int x=1;
        int biggest = x;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='<') x++;
            else if(s[i]=='>') x--;
            
            if(x>biggest) biggest=x;

        }
        cout<<biggest<<"\n";
    }
}
