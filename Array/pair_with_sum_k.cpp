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
	
	int k;
	cin >> k;
	
	int first = 0, last = n - 1;
	while(first < last)
	{
		if(a[first] + a[last] == k)
		{
			cout << a[first] << " " << a[last] << " = " << k << "\n";
			first++;
			last--;
		}
		else if(a[first] + a[last] > k)
		{
			last--;
		}
		else
		{
			first++;
		}
	}
	
	return 0;
}
