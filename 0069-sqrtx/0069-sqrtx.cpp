class Solution {
public:
    int mySqrt(int x) {
      /*  double t = x;
       while (t * t - x >= 1) 
           t = 0.5 * (t + x /t);
       return t;*/
        int lo = 0,hi = x, ans;
        while(lo<=hi){
        long long int mid = lo +(hi - lo)/2;
        if(mid*mid == x) {
            ans = mid;
            break;
        }
        else if(mid*mid<x){ lo = mid + 1;}
        else {hi = mid-1;}
        }
        return ans;
    }
};