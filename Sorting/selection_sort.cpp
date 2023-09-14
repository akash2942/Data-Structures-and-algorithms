#include<iostream>
using namespace std;

int *selection_sort(int *a, int n)
{
	int k = 0;
	for(int i = 0; i < n; i++)
	{
		int min = a[i];
		for(int j = i; j < n; j++)
		{
			if(min > a[j])
			{
				min = a[j];
				k = j;
			}
		}
		int temp = a[i];
		a[i] = min;
		if(k == 0)
		{
			continue;
		}
		else
			a[k] = temp;
	}
	return a;
}

int main()
{
	cout << "Enter the number of elements you want in the array\n";
	int n;
	cin >> n;
	
	cout << "Enter the elements in the array\n";
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	int *b = selection_sort(a,n);
	for(int i = 0; i < n; i++)
	{
		cout << b[i] << " ";
	}
	cout << "\n";
}