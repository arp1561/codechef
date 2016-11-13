#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    const size_t size(n);
    list<int> a(size);
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        a.insert(x);
    }
    for(list<int>::iterator it=a.begin();it!=a.end();it++)
        cout<<*it;
}
