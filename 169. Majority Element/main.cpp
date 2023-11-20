class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int val=-1,vote=0;
        for(int i = 0 ; i < nums.size();i++){
            if(vote==0){
                val=nums[i];
                vote++;
            }
            else{
                if(nums[i]==val){
                    vote++;
                }
                else{
                    vote--;
                }
            }
        }
        return val;
    }
};
