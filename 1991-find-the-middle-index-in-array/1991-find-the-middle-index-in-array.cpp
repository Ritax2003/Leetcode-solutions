class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0, leftsum=0;
        for(auto it:nums){
            sum+=it;
        }
        for(int i=0;i<nums.size();i++){
            if(leftsum == sum-leftsum-nums[i]) return i;
            leftsum+=nums[i];
        }
        return -1;
    }
};