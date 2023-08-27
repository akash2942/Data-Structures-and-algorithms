#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	int max = INT_MIN;
	for(int i = 0; i < n; i++)  // O(n) time
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	
	cout << max << endl;
	
	int arr[max + 1] = {0};
	
	for(int i = 0; i < n; i++)
	{
		arr[a[i]]++;
	}
	
	int count = 0;
	
	for(int i = 0; i < max ; i++)
	{
		cout << arr[i] << " ";
	}
	
	cout << "\n\n";
	for(int i = 0; i < max; i++)
	{
		if(arr[i] == 0)
		{
			count++;
		}
	}
	
	cout << count << endl;
}
