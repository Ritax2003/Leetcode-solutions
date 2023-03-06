class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> ans(k);
        int iter1=0;
        int iter2=0;
        int nums=1;
        while(iter2<k){
            if(arr[iter1]!=nums){
                ans[iter2++]=nums;
                nums++;
            }
            else{
                nums++;
                if(iter1+1<arr.size()){
                    iter1++;
                }
            }
        }
        return ans[k-1];
    }
};