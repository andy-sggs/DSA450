#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int low = -1,high=n,mid=0; 
	while (mid!=high)
	{
		if (arr[mid] == 0)
		{
			low++;
			swap(&arr[low],&arr[mid]);
			mid++;
		}
		else if(arr[mid] == 1)
		{
			mid++;
		}
		else
		{
			high--;
			swap(&arr[high],&arr[mid]);
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}