#include<bits/stdc++.h>
#define int long long
using namespace std;
int check(int arr[],int size)
{
	int i, j;
	vector<int> a;
	for(i = 0; i < size; i++)
		for(j = i+1; j < size; j++)
			if(arr[i] == arr[j])
				a.push_back(arr[i]);

	int max = *max_element(arr,arr+size);
	for(vector<int>::iterator it=a.begin(); it!=a.end();++it)
		if(max<=*it)
			return 0;
return 1;
		

} 

signed main()
{
      int T; cin>>T;
      while(T>0)
      {
            int SIZE; cin>>SIZE;
            int count[SIZE]={0};
            set<int> tie_check;
            for(int z=0;z<SIZE;z++)
            {
                  int n,unique=0; cin>>n;
                  set<int> a;
                  for(int i=0;i<n;i++)
                  {
                        int temp; cin>>temp;
                        a.insert(temp);
                  }
                  (a.size()==6)?unique=4:(a.size()==5)?unique=2:(a.size()==4)?unique=1:unique=0;
                  count[z]=n+unique;
                  tie_check.insert(count[z]);
            }
            

            if(tie_check.size()==1 || check(count,SIZE)==0)
			cout<<"tie\n";
		else
		{
			int smallest = -32000,loc=0;
                  for(int i=0;i<SIZE;i++)
                  {
                        if(count[i]>smallest)
                        {
                              smallest=count[i];
                              loc=i;
                        }
                  }
                  (loc==0)?cout<<"chef\n":cout<<loc+1<<endl;
		}	

      
	T--;
	}
}

