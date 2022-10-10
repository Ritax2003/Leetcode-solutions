class Solution {
public:
    long square(int n){
        int result =0;
        while(n!=0){
            int k = n%10;
            result = result+(k*k);
            n = n/10;
        }
        return result;
    }
    bool isHappy(int n) {
        int temp = n;
        while(true){
        if(square(temp)==89) return false;
        if(square(temp)==1) return true;
        temp = square(temp);
        }
    }
};