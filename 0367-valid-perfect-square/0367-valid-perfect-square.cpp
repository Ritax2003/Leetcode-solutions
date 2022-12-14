class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo = 1,hi = num;
        while(lo<=hi){
            long mid = lo +(hi-lo)/2;
            if(mid*mid == num) return true;
            else if(mid*mid<num) 
                lo = (int)mid+1;
            else hi = (int)mid-1;
        }
        
        return false;
    }
};