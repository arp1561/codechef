#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int n; cin>>n;
    string s; cin>>s;
    int count1=0,count2=0;
    for(int i=0;i<s.length();i++)
        if(s[i]=='A') count1++;
        else count2++;
    (count1>count2)?cout<<"Anton":(count2>count1)?cout<<"Danik":cout<<"Friendship";

}
