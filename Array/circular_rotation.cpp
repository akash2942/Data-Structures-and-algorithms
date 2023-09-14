#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n , k , q;
    cin >> n >> k >> q;

    vector<int> a(n);
    for(int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    k = k % n;
        rotate(a.begin(),a.end()-k,a.end());
    for(int i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        cout << a[t] << "\n";
    }
    
}
