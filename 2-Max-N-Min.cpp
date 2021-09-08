#include<iostream>
#include<climits>
using namespace std;
void maxNmin(int arr[],int n)
{
	int maxima = INT_MIN,minima = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		maxima = max(maxima,arr[i]);
		minima = min(minima,arr[i]);
	}
	cout<<"Max :"<<maxima<<"Min :"<<minima;
}
int main()
{
	int arr[] = {5,2,1,3,6,4,7,9,10,8}
	maxNmin(arr,10);
	return 0;
}