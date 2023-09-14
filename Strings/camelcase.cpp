#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
    int ans = 1, n = s.length();
    
    for(int i = 0; i < n; i++)
    {
        if(s[i] > 64 && s[i] < 91)
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
