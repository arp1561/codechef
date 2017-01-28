#include<bits/stdc++.h>
#define int long long
using namespace std;
int check_linear(vector<int> a,int n)
{
        vector<int> b(n);
        b=a;
        sort(b.begin(),b.end());
        if(a==b)
            return 1;
        return 0;
}
int check_dup(vector<int> a,int n)
{
    set<int> b;
    for(int i=0;i<n;i++)
        b.insert(a[i]);
    if(a.size()==b.size())
        return 0;
    return 1;
}
int check_missing(vector<int> a,int n)
{
    vector<int> b(n);
    b=a;
    sort(b.begin(),b.end());
    int k=0;
    for(int i=b[0];i<n;i++)
    {   
        if(i!=b[k]) return 1;
        k++;
    }
    return 0;
}
    
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)    cin>>a[i];
        
        if(check_linear(a,n)==0 && check_dup(a,n)==0 && check_missing(a,n)==0)
            cout<<"yes\n";
        else
            cout<<"no\n";

    }
}

