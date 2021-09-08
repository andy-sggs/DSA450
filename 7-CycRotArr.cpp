#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter no. of elements"<<endl;
	int n,i;
	cin>>n;
	int arr[n];
	for (i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int temp = arr[0],temp1;
	for (int i = 0; i < n-1; ++i)
	{
		temp1 = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp1;
	}
	arr[n-1] = temp;
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}