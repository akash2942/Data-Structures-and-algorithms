class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> ans(n);

        for(int i = 0; i < n; i++){
            ans[i] = 2 * i - n + 1;
        }

        return ans;
    }
};