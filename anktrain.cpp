#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        string s;
        int temp=n%8;
        switch(temp)
        {
            case 0: s=to_string(n-1);
                    cout<<s+"SL\n";
                    break;
            case 1: s=to_string(n+3);
                    cout<<s+"LB\n";
                    break;
            case 2: s=to_string(n+3);
                    cout<<s+"MB\n";
                    break;
            case 3: s=to_string(n+3);
                    cout<<s+"UB\n";
                    break;
            case 4: s=to_string(n-3);
                    cout<<s+"LB\n";
                    break;
            case 5: s=to_string(n-3);
                    cout<<s+"MB\n";
                    break;
            case 6: s=to_string(n-3);
                    cout<<s+"UB\n";
                    break;
            case 7: s=to_string(n+1);
                    cout<<s+"SU\n";
                    break;

            
        }
        
    }
}
