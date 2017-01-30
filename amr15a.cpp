#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n; cin>>n;
    int even=0,odd=0;
    for(int i=0;i<n;i++) 
    {
        int temp; cin>>temp;
        if(temp%2==0) even++;
        else odd++;
    }
    if(even>odd) cout<<"READY FOR BATTLE\n";
    else cout<<"NOT READY\n";
}

    

