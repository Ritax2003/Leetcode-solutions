class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<int>v;
        for(auto y : mp){
            if(y.second>1) v.push_back(y.first);
        }
        
        return v;
    }
};