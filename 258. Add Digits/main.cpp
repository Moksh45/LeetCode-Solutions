class Solution {
public:
    int addDigits(int num) {
        int total=0;
        while(num){
            int rem = num%10;
            total+=rem;
            num/=10;
        }
        if(total<10){
            return total;
        }
        return addDigits(total);
    }
};