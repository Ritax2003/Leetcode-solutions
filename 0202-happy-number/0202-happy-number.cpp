class Solution {
public:/*
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
    */
    bool isHappy(int n) {
        if(n == 1)
            return true;
        if(n > 1 && n <= 4)
            return false;
        
        int sum = 0;
        while(n > 0) {    
            int m = n % 10;    
            sum = sum + (m * m);    
            n = n / 10;
        }
        
        return isHappy(sum);
    }
};