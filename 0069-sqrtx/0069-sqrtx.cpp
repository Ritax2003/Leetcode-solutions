class Solution {
public:
    int mySqrt(int x) {
        double t = x;
       while (t * t - x >= 1) 
           t = 0.5 * (t + x /t);
       return t;
    }
};