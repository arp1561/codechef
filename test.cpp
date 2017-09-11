#include<bits/stdc++.h>
using namespace std;
int presum(int a[],int n,int index)
{
    return accumulate(a,a+index+1,0);
}
int sufsum(int a[],int n,int index)
{
    return accumulate(a+index,a+n,0);
}

int main()
{
    int a[]={2,1,3,1};
    int n=4;
    int index = 3;
    cout<<presum(a,n,index)<<" "<<sufsum(a,n,index);

}


