#include<bits/stdc++.h>
#define int long long
using namespace std;
int presum(int a[],int n,int index)
{
    return accumulate(a,a+index+1,0);

}
int sufsum(int a[],int n,int index)
{
    return accumulate(a+index,a+n,0);
}
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        
        for(int i=0;i<n;i++)
        {
            b[i]=presum(a,n,i)+sufsum(a,n,i);
        }
        cout<<distance(b,min_element(b,b+sizeof(b)/sizeof(b[0])))+1<<"\n";
    }
    
} 
