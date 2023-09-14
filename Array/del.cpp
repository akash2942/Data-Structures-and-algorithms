#include<iostream>
using namespace std;

void delet(int *a, int &n, int del)
{
	if(del == 0) // deletion from the front is happennig here
	{
		for(int i = 0; i < n - 1; i++)
		{
			a[i] = a[i + 1];
		}
		n--;
	}
	else if(del == n) // deletion from the end is happening here
	{
		n--;
	}
	else	// deletion from the middle is happening here
	{
		for(int i = del; i < n - 1;i++)
		{
			a[i] = a[i + 1];
		}
		n--;
	}
}

int main()
{
	int n;
	cin >> n;
	
	cout << "Enter the " << n  <<"elements you want in the array\n";
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	int del;
	cout << "Enter the index of element you want to delete\n";
	cin >> del;
	delet(a,n,del);
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	return 0;
}