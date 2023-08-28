class Solution {
public:
    int lengthOfLastWord(string s) {

        int a = 0;
        int count = 0;

        for(int i = s.length() - 1; i >= 0; i--) {

            if(count == 0 && s[i] == ' ') {
                continue;
            }

            if(s[i] != ' ') {
                count = 1;
                a++;
            }
            
            else {
                break;
            }
        }

        return a;
    }
};