#include<iostream>
#include<algorithm>
using namespace std;

int minStepsToOne(int n)
{
	if(n == 0)
		return 0;
	if(n < 0)
		return 0;
	int ans = 1 + minStepsToOne(n - 1);
	ans = min(ans, 1 + minStepsToOne(n - 2));
	ans = min(ans, 1 + minStepsToOne(n - 3));
	return ans;
}

int main()
{
	int n;
	cin >> n;
	
	int ans = minStepsToOne(n);
	cout << ans << "\n";
	
	return 0;
}