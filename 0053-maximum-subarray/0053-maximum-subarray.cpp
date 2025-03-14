class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0],currsum = nums[0];
        int start=0,end=0,currstart=0;
        for(int i=1;i<nums.size();i++){
            if(currsum<0){
                currsum=nums[i];
                currstart = i;
            }
            else{
                currsum+=nums[i];
            }
            if(currsum > maxsum){
                maxsum = currsum;
                start = currstart;
                end = i;
            }
        }

        return maxsum;   
    }
};