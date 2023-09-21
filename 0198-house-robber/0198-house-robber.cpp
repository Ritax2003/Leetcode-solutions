class Solution {
public:
    int rob(vector<int>& nums) {
        int b = nums[0];
        if(nums.size()==1) return b;
        int c = max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++){
            int a = max(nums[i]+b,c);
            b=c;
            c=a;
        }
        return c;
    }
};