class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int res = n*(n+1)/2;
        int i=0;
        while(i<nums.size()){
            res = res - nums[i];
            i++;
        }
        return res;
    }
};