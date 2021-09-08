#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter number of elements";
	int n,i,j;
	cin>>n;
	int arr[n];
	for (i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	j = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			if (i!=j)
			{
				arr[i] = arr[i]+arr[j];
				arr[j] = arr[i]-arr[j];
				arr[i] = arr[i]-arr[j];
			}
			j++;
		}
	}
	for (i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}