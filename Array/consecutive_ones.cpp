class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int a = 0, b = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                a++;
                if(a > b){
                    b = a;
                }
            }

            else{
                a = 0;
            }

        }

        return b;  
    }
};