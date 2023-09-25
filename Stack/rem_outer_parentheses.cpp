class Solution {
public:
    string removeOuterParentheses(string s) {

        string ans;
        stack<char> a;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                a.push(s[i]);
            }

            if(a.size() > 1){
                ans = ans + s[i];
            }

            if(s[i] == ')'){
                a.pop();
            }
        }
        
        return ans;
    }
};