#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        string s; cin>>s;
        set<char> st;
        vector<int> occur;
        for(int i=0;i<s.length();i++) st.insert(s[i]);
        for(set<char>::iterator it=st.begin();it!=st.end();it++)
        {
            size_t n = count(s.begin(),s.end(),*it);
            occur.push_back(n);
        }
        int flag =0;
        for(int i=0;i<occur.size();i++)
        {
            int sum1=occur[i];
            int sum2=0;
            for(int j=0;j<occur.size();j++)
            {
                if(i!=j) sum2+=occur[j];
            }
            if(sum1==sum2)
            {
                cout<<"YES\n";
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"NO\n";

    }
    
}
