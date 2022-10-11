class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int L = INT_MAX;
        int R = INT_MAX;
        int mid = INT_MAX;
        bool left = false,middle = false,right = false;
        for(int i =0; i < nums.size();i++) {
            if(L > nums[i]){
                L = nums[i];
                left = true;
            } 
           if(nums[i] > L && nums[i] < mid) {
                mid = nums[i];
                middle = true;
            } 
            if(nums[i]> mid && nums[i] <= R){
                R = nums[i];
               right = true;
            }
            if(left && right && middle) return true;
        }
        return false;
    }
};