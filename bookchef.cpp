#include<bits/stdc++.h>
#define int long long
using namespace std;
bool search(int search,int a[],int n)
{
    for(int i=0;i<n;i++)
        if(search==a[i])
            return true;
    return false;
}
signed main()
{
    int n,m; cin>>n>>m;
    int a[n],k,p;
    string s;
    map<int,string> g,v;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
    {
        cin>>k>>p>>s;
        if(search(k,a,n))
            g.insert(pair<int,string>(p,s));///////////////////
        else
            v.insert(pair<int,string>(p,s));
    }
    map<int,string>::reverse_iterator it;

    for(it=g.rbegin();it!=g.rend();it++)
        cout<<it->second<<endl;
    
    for(it=v.rbegin();it!=v.rend();it++)
        cout<<it->second<<endl;
}
