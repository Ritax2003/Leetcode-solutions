class Solution {
public:
    void sortColors(vector<int>& nums) {
        int num0 = 0;
        int num1 = 0;
        int num2 = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) num0++;
            if(nums[i]==1) num1++;
            if(nums[i]==2) num2++;
        }
       for(int i=0;i<num0;i++) nums[i]=0;
       for(int j=num0;j<num0+num1;j++) nums[j]=1;
       for(int k=num0+num1;k<nums.size();k++) nums[k]=2;
    }
};