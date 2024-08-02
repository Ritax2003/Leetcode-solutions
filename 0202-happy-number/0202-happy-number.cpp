class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
        if(n>1 && n<=4) return false;
        int sum = 0;
        while(n>0){
            int rem = n%10;
            sum+=(rem*rem);
            n/=10;
        }
        return isHappy(sum);
    }
};