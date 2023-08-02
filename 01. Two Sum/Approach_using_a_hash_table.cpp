class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int>hash;
        vector<int>v;
        for(int i = 0 ; i < nums.size();i++){
            int sub = target - nums[i]; 
            if(hash.count(sub)){
                v.push_back(hash[sub]);
                v.push_back(i);
                return v;
            }
            hash[nums[i]]=i;
        }
        return v;
    }
};