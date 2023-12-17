class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans(2,0);
        int size = grid.size();
        int n = size*size+1;
        vector<int>temp(n,0);
        for(int i = 0 ; i < size; i++){
            for(int j = 0 ; j < size; j++){
                temp[grid[i][j]]++;
            }
        }
        for(int i =1 ; i <n; i++){
            if(temp[i]==0){
                ans[1]=i; 
            }
            else if(temp[i]==2){
                ans[0]=i;
            }
        }
        return ans;
    }
};