class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i = 0 ; i <= n ; i++){
            bitset<64> b(i);
            int res = b.count();
            ans.push_back(res);
        }
    return ans;
    }
};