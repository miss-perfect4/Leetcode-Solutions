class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        unordered_set<int>s;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]) s.insert(nums1[i]);
            }
        }
        for(int x:s) result.push_back(x);
        return result;
        
    }
};