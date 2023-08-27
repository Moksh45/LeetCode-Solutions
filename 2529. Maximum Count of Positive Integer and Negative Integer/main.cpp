class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg=0;
        int n=nums.size();
        int zero=0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]<0){
                ++neg;
            }
            else if(nums[i]==0){
                zero++;
            }
            else{
                break;
            }
        }
        return max(neg,n-(neg+zero));
    }
};