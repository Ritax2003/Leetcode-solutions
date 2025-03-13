class Solution {
public:
    vector<vector<int>>ans;
    vector<int>current;
    void subsethelper(vector<int>&nums,int indx){
        if(indx == nums.size()){
            ans.push_back(current);
            return ;
        }
        current.push_back(nums[indx]);
        subsethelper(nums,indx+1);
        current.pop_back();
        subsethelper(nums,indx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        subsethelper(nums,0);
        return ans;
    }
};