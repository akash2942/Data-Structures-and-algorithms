#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,j = 0;
        cin >> n;
        int a[n], b[n];
        
        for(i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }
        
        int sum = n * (n + 1) / 2 ;
        for(i = 0; i < n - 1; i++)
        {
            j = j + a[i];
        }
        int missing = sum - j;
        cout << missing << "\n";
    }
	return 0;
}