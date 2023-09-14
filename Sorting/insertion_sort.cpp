#include<iostream>
using namespace std;

int *insertion_sort(int *a, int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j > 0; j--)
		{
			if(a[j] < a[j - 1])
			{
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	return a;
}

int main()
{
	int n;
	cout << "Enter the number of elements you want in the array\n";
	cin >> n;
	
	cout << "Enter the elements of the array\n";
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	int *b = insertion_sort(a,n);
	for(int i = 0; i < n; i++)
	{
		cout << b[i] << " ";
	}
	cout << "\n";
}