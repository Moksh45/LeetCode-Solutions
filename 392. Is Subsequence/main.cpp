class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        int i = 0 , j = 0;
        while(j<n2 && i<n1){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        if(i==n1){
            return true;
        }
        return false;
    }
};