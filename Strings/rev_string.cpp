class Solution {
public:
    void reverseString(vector<char>& s) {
        int ans = s.size() - 1;
        for(int i = 0, j = ans; i <= j; i++,j--){
            swap(s[i],s[j]);
        }
    }
};