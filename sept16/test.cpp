#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
void printRepeating(int arr[], int size)
{
  int i, j;
  vector<int> a;
  for(i = 0; i < size; i++)
    for(j = i+1; j < size; j++)
      if(arr[i] == arr[j])
        a.push_back(arr[i]);

  for(vector<int>::iterator it=a.begin();it!=a.end();++it)
		cout<<*it;

}     
 
int main()
{
  int arr[] = {4, 2, 4, 5, 2, 3, 1};
  int arr_size = sizeof(arr)/sizeof(arr[0]);  
  printRepeating(arr, arr_size);
  
}
