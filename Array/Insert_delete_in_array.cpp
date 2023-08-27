#include<iostream>
using namespace std;

void insert_delete(int arr[], int n)
{
/*	// Insertion at start index of the array
	
	int insert_at_start;
	cin >> insert_at_start;
	
	arr[0] = insert_at_start;
	
	// Insertion at end index of the array
	
	int insert_at_end;
	cin >> insert_at_end;
	
	arr[n - 1]  = insert_at_end;
	
	
	// Deletion at starting index of the array
/*	for(int i = 0; i < n - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	n = n - 1;
	
	// Deletion at end index of the array
	n = n - 1;
	*/
	
	// Insertion at middle
	
/*	int key;
	cin >> key;
	
	n = n + 1;
	for(int i = n - 2; i <= key - 2; i--)
	{
		arr[i + 1] = arr[i];
	}
	
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
*/

// deletion at middle

	int index;
	cin >> index;
	
	for(int i = index; i < n; i++)
	{
		arr[i - 1] = arr[i];
	}	
	
	n = n - 1;
	
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	
	int arr[n];
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	int size = sizeof(arr)/sizeof(arr[0]);
	
	 insert_delete(arr,n) ;
	cout << endl;
	
	return 0;
}
