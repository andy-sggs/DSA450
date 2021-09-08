#include <iostream>
using namespace std;
void arrRev(int *arr,int n)
{
	int i = 0,j = n-1,temp;
	while(i<=j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
	arrRev(arr,11);
	for (int i = 0; i < 11; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}