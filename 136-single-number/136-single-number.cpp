class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorresult = 0;
        for(int i =0;i<nums.size();i++){
            xorresult^=nums[i];
        }
        return xorresult;
    }
};