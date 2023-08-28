class Solution {
public:
    int lengthOfLastWord(string s) {

        int b = 0;
        int count = 0;

        for(int i = s.length() - 1; i >= 0; i--) {

            if(count == 0 && s[i] == ' ') {
                continue;
            }

            if(s[i] != ' ') {
                count = 1;
                b++;
            }
            
            else {
                break;
            }
        }

        return b;
    }
};