#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--)
	{
	    int n,count = 0, count2 = 0,temp;
	    cin >> n;
	    int a[n], b[n];
	    
	    for(int i = 0; i < n;i++)
	    {
	        cin >> a[i];
	        if(a[i] == 0)
	        {
	            count++;
	        }
	        else 
	        {
	            count2++;
	        }
	    }
	    temp = count + count2;
	    int i = 0;
	    while(i < count)
	    {
	        b[i] = 0;
	        i++;
	    }
	    int jo = count;
	    while(jo < temp)
	    {
	        b[jo] = 1;
	        jo++;
	    }
	    for(int j = 0; j < n; j++)
	    {
	        cout << b[j] << " ";
	    }
	    cout << "\n";
	    
	}
	return 0;
}