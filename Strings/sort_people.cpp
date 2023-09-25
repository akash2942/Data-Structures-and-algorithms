class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

    map<int, string, greater<int> > a;
    vector<string> ans;
        
    for(int i = 0; i < names.size(); i++) {
        a[heights[i]] = names[i];
    }
    
    for(auto it : a) {
        ans.push_back(it.second);
    }

    return ans;    
    }
};