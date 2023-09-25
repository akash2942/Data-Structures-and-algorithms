class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> track;

        for(int i = 0; i < nums1.size(); i++) {
            track[nums1[i]]++;
        }

        for(int i = 0; i <nums2.size(); i++){
            if(track[nums2[i]] > 0) {
                return nums2[i];
            }
        }
        return -1;
    }

};