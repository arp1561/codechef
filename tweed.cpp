#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int n,p,flag=0; cin>>n;
        string player; cin>>player;
        (player=="Dee")?p=1:p=0;

        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n;i++)
        {
            if(
