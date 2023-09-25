class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> a;
        int n = heights.size();

        for(int i = 0; i < n; i++){
            a.push_back(heights[i]);
        }

        sort(a.begin(),a.end());

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(heights[i] != a[i]){
                ans++;
            }
        }

        return ans;
    }
};