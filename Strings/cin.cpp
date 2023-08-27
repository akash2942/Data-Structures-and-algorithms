#include<iostream>
using namespace std;

int main()
{
	char a[1000];
	cin >> a ;// as soon as the space or enter(\n) comes cin breaks not suitable for strings
	cout << a << endl; // cin doesn't input spaces or newlines
	
	return 0;
}
