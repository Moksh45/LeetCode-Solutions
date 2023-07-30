class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>result;
        vector<int>v1,v2;
        unordered_set<int> set1(nums1.begin(),nums1.end());
        unordered_set<int> set2(nums2.begin(),nums2.end());

        for(auto i : set1){
            if(set2.count(i)==0)
            {
                v1.push_back(i);
            }
        }
        for(auto i : set2){
            if(set1.count(i)==0)
            {
                v2.push_back(i);
            }
        }
        result.push_back(v1);
        result.push_back(v2);
        return (result);
    }
};