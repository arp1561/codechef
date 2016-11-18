#include<bits/stdc++.h>
#define int long long
using namespace std;
int check(vector<int> a,int n)
{
    vector<int>::iterator x,y;
    x=find(a.begin(),a.end(),2);
    if(x!=a.end())
        return 0;
    return 1;

}
int check2(vector<int> a,int n)
{
    vector<int>::iterator x;
    x=find(a.begin(),a.end(),5);
    if(x!=a.end())
        return 1;
    return 0;
}
float average(vector<int> a,int n)
{   
    float avg = accumulate(a.begin(),a.end(),0.0)/n;
    return avg;
}

signed main()
{
    int T;cin>>T;
    while(T--)
    {
        int n,x; cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        if(check(a,n) && check2(a,n) && average(a,n)>=4.0)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }
}
