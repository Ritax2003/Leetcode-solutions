class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>mp;
        vector<vector<int>>res;
        mp[0]={-1};
        int cnt =0;
        int sum =0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            int rem = (((sum%k)+k)%k);
            if(mp.find(rem)!=mp.end()){
                for(int start:mp[rem]){
                    //vector<int>subarray(nums.begin()+start+1,nums.begin()+i+1);
                    //res.push_back(subarray);
                    cnt++;
                }
            }
            mp[rem].push_back(i);
        }
        return cnt;
    }
};