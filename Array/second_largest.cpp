#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n,max = 0,count;
		cin >> n;
		
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		
		for(int i = 0; i < 2; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(max < a[j])
				{
					max = a[j];
					count = j;
				}
			}
			if(i == 0)
			{
				a[count] = 1;
				max = 0;	
			}
			else
			{
				cout << max << "\n";
			}
		}
		
	}
}