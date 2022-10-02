class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans[nums.size()];
        for(int i =0;i<nums.size();i++){
            ans[i]=nums[i];
        }
        if(nums.size()==1){
            return ans[0];
        }
        int n = nums.size();
        sort(ans,ans+n);  
        int aindx = (int)(n/2);
        int a = ans[aindx];
        return a;
    }
};