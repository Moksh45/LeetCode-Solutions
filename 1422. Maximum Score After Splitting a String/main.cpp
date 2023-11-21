class Solution
{
public:
    int maxScore(string s) {
        int ones = 0;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ones++;
            }
        }
        int zero = 0, max = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0')
            {
                ++zero;
            }
            if (s[i] == '1')
            {
                --ones;
            }
            if (max < (zero + ones))
            {
                max = zero + ones;
            } 
        }
        return max; }
};