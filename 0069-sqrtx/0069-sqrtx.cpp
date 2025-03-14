class Solution {
public:
    int mySqrt(int x) {
        long long y = x;
        while(y*y>x){
            y = (y +x/y)/2;
        }
        return y;
    }
};