class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        int cnt = 0;
        int prod = 1,start=0;
        for(int end=0;end<nums.size();end++){
            prod*=nums[end];

            while(prod>=k and start<=end){
                prod/=nums[start];
                start++;
            }

            //vector<int>temp;
            for(int i=end;i>=start;i--){
                //temp.push_back(nums[i]);
                cnt++;
            }
           // ans.push_back(temp);
        }
        return cnt;
    }
};