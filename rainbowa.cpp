#include<bits/stdc++.h>
#define int long long
using namespace std;
int check_seq(int a[],int n)
{
    set<int> as;
    for(int i=0;i<n;i++) as.insert(a[i]);
    int ar[as.size()];

    int index = 0;
    for(set<int>::iterator it=as.begin();it!=as.end();it++) ar[index]=*it,index++;
    
    for(int i=1;i<as.size();i++) if(!(ar[i]==(ar[i-1]+1))) return 0;

    return 1; 
        
}
int check_equ(int a[],int b[],int n)
{
    sort(a,a+n);
    sort(b,b+n);

    for(int i=0;i<n;i++) if(a[i]!=b[i]) return 0;

    return 1;
}
signed main()
{   
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        if(n%2==0)
        {
            int mid = (n-1)/2;
            int a[mid+1],b[mid+1];
            int index = 0;
            for(int i=0;i<=mid;i++) a[index]=arr[i],index++;
            index = 0;
            for(int i=mid+1;i<=n;i++) b[index] = arr[i],index++;
	    if(check_seq(a,mid+1) && check_seq(b,mid+1) && check_equ(a,b,mid+1))
	    	cout<<"yes\n";
	    else
	    	cout<<"no\n";

        }
        else
        {
            int mid = (n-1)/2;
            int a[mid+1],b[mid+1];
            int index=0;
            for(int i=0;i<=mid;i++) a[index]=arr[i],index++;
            index=0;
            for(int i=mid;i<=n;i++) b[index]=arr[i],index++;
	    if(check_seq(a,mid+1) && check_seq(b,mid+1) && check_equ(a,b,mid+1))
	    	cout<<"yes\n";
	    else
		cout<<"no\n";


        }
    }
}

            

