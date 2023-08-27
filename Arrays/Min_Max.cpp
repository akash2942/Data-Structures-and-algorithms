#include<iostream>
#include<climits>
#include<vector>
using namespace std;

vector<int> ans(int arr[], int n)
{
	vector<int> s;
	int max = INT_MIN,min = INT_MAX;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	
	s.push_back(max);
	s.push_back(min);
	
	return s;
	
}

int main()
{
	int n;
	cin >> n;
	
	int a[n];
	
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	vector<int> ab = ans(a,n);
	
	int size = ab.size();
	for(int i = 0; i < size; i++)
	{
		cout << ab[i] << " ";
	}
	
	return 0;
}
