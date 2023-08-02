class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char>val;
        int left = 0;
        int maxLength = 0;

        for(int right = 0 ; right < n ;right++){
            if(val.count(s[right]) == 0 ){
                val.insert(s[right]); // a b c d  = 4 
                maxLength = max(maxLength , right-left+1);
            }

            else{
                while(val.count(s[right])){
                    val.erase(s[left]);  // a b 
                    left++;  //3
                }
                val.insert(s[right]) ; // a b c 
            }
        }
        return maxLength;
    }
};