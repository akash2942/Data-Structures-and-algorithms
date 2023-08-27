#include<iostream>
using namespace std;

void binary_search(int arr[], int start, int end, int search)
{
	while(start <= end)
	{
		int middle = (start + end) / 2;
		
		if(arr[middle] == search)
		{
			cout << "Element is present in the array at postion " << middle + 1 << endl;
			return;
		}
		else if(arr[middle] > search)
		{
			end = middle - 1;
		}
		else
		{
			start = middle + 1;
		}
	}
	
	cout << "Element not present in the array\n";
}

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int start = 0, end = 9, search;
	
	cin >> search;
	
	binary_search(a,start,end,search);
	
	return 0;
}
