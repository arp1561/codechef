#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        string str; cin>>str;
		str.erase(std::unique(str.begin(), str.end()), str.end());
    	if(str.length()==1) cout<<"yes\n";
		else		
		{
		    if(str=="CES" || str=="CE" || str=="CS" || str=="ES")
		        cout<<"yes\n";
		    else
		        cout<<"no\n";
		}

			
	}
	
}
