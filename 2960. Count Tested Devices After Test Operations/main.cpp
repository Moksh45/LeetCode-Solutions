class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int result=0;
        int len = batteryPercentages.size();
        for(int i = 0 ; i < len ; i++){
            if(result<batteryPercentages[i]){
               result++;
            }
        }
        return result;
    }
};