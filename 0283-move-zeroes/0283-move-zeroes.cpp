class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int indx = 0;
        int n = nums.size();
        
        for(int i =0;i<n;i++){
            while(i<n and nums[i]==0) i++;
            if(i<n) nums[indx++] = nums[i];
            
        }
        while(indx < n ){
            nums[indx]=0;
            indx++;
        }
    }
};