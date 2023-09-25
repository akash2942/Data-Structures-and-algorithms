class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0, ans = 0;

        for(int i = 0; i < s.size(); i++){

            if(s[i] == 'R'){
                count++;
            }

            if(s[i] == 'L'){
                count--;
            }

            if(count == 0){
                ans++;
            }
        }
         return ans;
    }
};