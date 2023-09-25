class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int even = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int x = nums[i];
            string change = to_string(x);

            int a = change.size();
            if(a % 2 == 0){
                even++;
            }
        }
        return even;
    }
};