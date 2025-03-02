class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>res;
        unordered_map<int,int>mp;
        for(auto x : nums1){
            mp[x[0]]+=x[1];
        }
        for(auto x : nums2){
            mp[x[0]]+=x[1];
        }
        for(auto &[key,value] : mp){
            res.push_back({key,value});
        }
        
        sort(res.begin(),res.end());
        return res;
    }
};