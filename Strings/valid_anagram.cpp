class Solution {
public:
    bool isAnagram(string s, string t) {

        int ans[26] = {0};

        for(int i = 0; i < s.length(); i++){
            ans[s[i] - 'a']++;
        }

        for(int i = 0; i < t.length(); i++){
            ans[t[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++){
            if(ans[i] != 0){
                return false;
            }
        }

        return true;
    }
};