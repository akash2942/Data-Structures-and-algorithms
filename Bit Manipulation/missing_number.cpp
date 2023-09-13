class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int a = nums.size();
        int b = a;

        for(int i = 0; i < a; i++){
            b ^= i;
            b ^= nums[i];
        }

        return b;
    }
};