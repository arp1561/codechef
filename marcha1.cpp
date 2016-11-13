#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n,m,x,sum=0; cin>>n>>m;
        list<int> a;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        a.sort();
        a.reverse();
        list<int>::iterator it = a.begin();
        while(*it>m and a.size()!=0)
        {
            a.pop_front();
            it=a.begin();
        }
        it = a.begin();
        sum=*it;
        a.pop_front();
        for(it=a.begin();it!=a.end();++it)
        {
            if(sum==m)
                break;
            else if(sum+*it<=m)
                sum+=*it;
        }
        if(sum==m)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }
}
