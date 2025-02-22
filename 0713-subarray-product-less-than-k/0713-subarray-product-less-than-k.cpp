class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        vector<vector<int>> res;
        int cnt=0;
        int prod=1;
        int start=0;
        for(int end=0;end<nums.size();end++){
            prod*=nums[end];

            while(prod>=k and start<=end){
                prod/=nums[start];
                start++;
            }
            vector<int>subarray;
            for(int i=end;i>=start;i--){
                //subaray.insert(subarray.begin(),subarray[i]);
               // res.push_back(subarray);
                cnt++;
            }
        }

        return cnt;
    }
};