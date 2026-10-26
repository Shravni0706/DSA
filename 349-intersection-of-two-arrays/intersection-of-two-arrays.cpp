class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(),nums1.end());

        unordered_set<int> common;
        for(int x: nums2){
            if(set1.count(x)) common.insert(x);
        }
        return vector<int>(common.begin(),common.end());
    }
};