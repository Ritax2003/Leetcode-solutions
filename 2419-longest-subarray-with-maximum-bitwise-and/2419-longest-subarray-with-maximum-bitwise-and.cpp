class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0;
        int maxN = *max_element(nums.begin(),nums.end());
        int maxlen = 0;
        int currlen = 0;
        while(j<nums.size()){
            if(nums[j]==maxN){
                currlen++;
                maxlen=max(maxlen,currlen);
            }
            else{
                currlen = 0;
            }
            j++;
        }
        return maxlen;
    }
};