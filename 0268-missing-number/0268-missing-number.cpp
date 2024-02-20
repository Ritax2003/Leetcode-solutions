class Solution {
public:
    int missingNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
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