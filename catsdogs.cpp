#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int min,max,c,d,l,x; cin>>c>>d>>l;
        x = c>d*2;
        min = x*(c/(d*2))*4+d*4;
        max = c*4+d*4;

        if(l>=min && l<=max)    cout<<"yes\n";
        else    cout<<"no\n";

    }
}
