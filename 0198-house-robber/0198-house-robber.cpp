class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
         int rob = 0;
        int norob = 0;
        for (int i = 0; i < nums.size(); i++) {
            int newRob = norob + nums[i];
            int newNoRob = max(norob, rob);
            rob = newRob;
            norob = newNoRob;
        }
        return max(rob, norob);
    }
};