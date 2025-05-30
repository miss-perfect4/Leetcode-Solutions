class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int>s1(nums1.begin(),nums1.end());
        unordered_set<int>s2(nums2.begin(),nums2.end());
        unordered_set<int>s3(nums3.begin(),nums3.end());
        unordered_map<int,int>m;
        for(int x:s1) m[x]++;
        for(int x:s2) m[x]++;
        for(int x:s3) m[x]++;

        vector<int>result;
        for(auto &x:m){
            if(x.second>=2) result.push_back(x.first);
        }
        return result;

    }
};