class Solution {
public:
    int arrangeCoins(int n) {
       /* int i=1;
        while (n>=i) {
            n-=i;
            i++;
        }

        return --i; */
        int start = 1,end = n,res=0;
        while(start<=end){
            long mid = start+(end-start)/2;
            long sum = mid*(mid+1)/2;
            if(sum>n) end = mid-1;
            else if(sum<n){
                res = mid;
                start = mid+1;
            }
            else return mid;
        }
        return res;
    }
};