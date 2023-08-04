class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>a;
        vector<vector<string>>v;
        
        for(int i = 0 ;i < strs.size(); i++){
            string str = strs[i];
            sort(str.begin(),str.end());
            a[str].push_back(strs[i]);
        }

        for(auto &i : a){
            v.push_back(i.second);
        }
        return v;
    }
};