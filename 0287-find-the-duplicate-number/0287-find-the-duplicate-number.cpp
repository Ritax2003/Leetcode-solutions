class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int dupli = 0;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto it: mp){
            if(it.second>1){
                dupli = it.first;
                break;
            }
        }
        return dupli;
    }
};