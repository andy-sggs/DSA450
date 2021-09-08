#include<iostream>
#include <algorithm>
using namespace std;
int kthMax(int arr[],int k,int n)
{
	sort(arr,(arr+n));
	return arr[n-k];
}
int main()
{
	int n,k;
	cout<<"Enter the no. of elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elements"<<endl;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cout<<"Enter k"<<endl;
	cin>>k;
	cout<<kthMax(arr,k,n)<<endl;
	return 0;
}