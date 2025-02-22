class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>mp;
        mp[0]={-1};
        int cnt =0;
        vector<vector<int>>res;
        int prefixsum=0;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            if(mp.find(prefixsum-k)!=mp.end()){
                for(int start: mp[prefixsum-k]){
                    //vectpr<int>subarray(nums.begin()+start+1,nums.begin()+i+1);
                    //res.push_back(subarray);
                    cnt++;
                }
            }
            mp[prefixsum].push_back(i);
        }
        return cnt;
    }
};