class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int start=0;
        long int prod=1;
        int cnt=0;
       // vector<vector<int>>res;
        for(int end=0;end<nums.size();end++){
            prod*=nums[end];

            while(prod>=k and start<=end){
                prod/=nums[start];
                start++;
            }
            //vector<int>temp;
            for(int i=end;i>=start;i--){
                //temp.insert(temp.begin(),nums[i]);
                //res.push_back(temp);
                cnt++;
            }
        }

        return cnt;
    }
};