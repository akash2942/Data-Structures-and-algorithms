#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false) ;
    cin.tie(nullptr);
	int T;
	cin >> T;
	while(T--)
	{
	    long long int n,i;
	    cin >> n;
	    int a[n];
	    vector<int> b ;
	    for(i = 0; i < n; i++)
	    {
	        cin >> a[i];
	    }
	    
	    for(i = 1; i <n ; i++)
	    {   
	
	        if(a[i-1] > a[i])
	        {
	            b.push_back(a[i]);
	        }
	        else
	        {
	            b.push_back(-1);
	        }
	    }
	    b.push_back(-1);
	    
	    for(auto i : b){
	        cout<<i<<" ";
	    }
	    cout << "\n";
	}
	return 0;
}