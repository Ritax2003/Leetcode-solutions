class Solution {
public:
  int reverse(int x) {
        bool check = (x<0 && x>INT_MIN)?true:false;
        if(check==true) x = x*(-1);
    
        int rev=0;
        int m = x;
        while(m>0){
            int r = m%10;
            if((rev>INT_MAX/10)||(rev<INT_MIN/10)) return 0;
            rev = rev*10+r;
            m = m/10;
        }
        if(check==1){
            return rev*(-1);
        }
        else return rev;
    }
};