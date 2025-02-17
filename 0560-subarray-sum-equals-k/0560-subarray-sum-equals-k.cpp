class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>mp;
        mp[0]={-1};
        int prefixsum=0;
        int cnt =0;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            if(mp.find(prefixsum-k)!=mp.end()){
                for(auto startindx:mp[prefixsum-k]){
                   // vector<int>sub(nums.begin()+startindx+1,nums.begin()+i+1);

                    cnt++;
                }
            }
            mp[prefixsum].push_back(i);
        }
        return cnt;
    }
};