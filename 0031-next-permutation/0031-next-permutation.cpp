class Solution {
public:
void nextPermutation(vector<int>& nums) {
    int indx = -1;
    int n = nums.size();
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            indx = i;
            break;
        }
    }
    if(indx == -1){// when array is already sorted,it's the biggest number already
        reverse(nums.begin(),nums.end());
        return;
    }
    for(int i = n-1;i>indx;i--){
        if(nums[i]>nums[indx]){
            swap(nums[i],nums[indx]);
            break;
        }
    }
    reverse(nums.begin()+indx+1,nums.end());
  }
};