class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k =0;
        int n = nums.size();
        
        for(int i =0;i<n;i++){
            nums[k]= nums[i];
            while(i+1<n and nums[i]==nums[i+1]) i++;
            k++;
        }
        return k;
    }
};