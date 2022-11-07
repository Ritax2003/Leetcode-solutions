class Solution {
public:
    int bs(vector<int> &nums, int target,int start,int end){
        int indx = -1;
        if(nums.size()==1 && nums.front() == target){
            return 0;
        }
        if(nums.size()==1 && nums.front() != target){
            return -1;
        }
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]==target){
                indx = mid;
                break;
            }
            if(nums[mid]>target) end = mid-1;
            if(nums[mid]<target) start = mid+1;
        }
        if(indx!=-1){return indx;}
        else return -1;
    }
    int search(vector<int>& nums, int target) {
        return bs(nums,target,0,nums.size());
    }
};