class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }

        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second == 1) res= it->first;
        }

        return res;
    }
};