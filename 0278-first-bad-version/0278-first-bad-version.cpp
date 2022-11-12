// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lo =1,hi = n;
        while(lo<=hi){
            int mid = lo +(hi-lo)/2;
            if(isBadVersion(mid)==false){
                lo = mid+1;
            }
            else hi = mid-1;
        }
        
        return lo;
    }
};