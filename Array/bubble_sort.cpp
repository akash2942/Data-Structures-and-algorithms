#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
	int temp;
	// n - 1 passes
	// n - i - 1 comparisons
	
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - i - 1; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	
	int arr[n];
	
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	int size = sizeof(arr)/sizeof(arr[0]);
	// Before sorting
	
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	bubble_sort(arr,n);
	
	// After sorting in ascending order
	
	for(int i = 0; i < n ; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
	
	
}
