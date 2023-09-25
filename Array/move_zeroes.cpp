class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a = nums.size();

        int b = 0, c = 0;

        while(c < a) {
            if(nums[c] == 0){
                c++;
            }

            else{
                swap(nums[b],nums[c]);
                b++;
                c++;
            }
        }
    }
};