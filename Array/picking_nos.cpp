#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n],b[n],count = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = 0;
    }

    sort(a,a+n);

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] == a[i] || a[j] == a[i] + 1)
            {
                ++b[count];
            }
        }
            count++;
    }

    int max = b[0];
    for(int i = 1; i < n; i++)
    {
        if(b[i] > max)
        {
            max = b[i];
        }
    }

    cout << max + 1 << "\n";
}
