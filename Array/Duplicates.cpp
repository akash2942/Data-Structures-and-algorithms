#include<iostream>
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
	
	int arr[1000] = {0};
	
	for(int i = 0; i < n; i++)
	{
		arr[a[i]]++; // a[i] value became index of Arr
	}
	
	// if the value is greater then 1 then means duplicates present
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] > 1)
		{
			count = count + 1;
		}
	}
	cout << count << endl;
}
