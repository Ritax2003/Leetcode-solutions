class Solution {
public:
   vector<int> solve(vector<int> &nums ,int i,unordered_map<int ,vector<int>> &mp) {
        vector<int> ans = {};
        if(!mp[i].empty()) {
            return mp[i];
        }
        for(int k = 0 ; k < i; ++k) {
            if(nums[i] % nums[k] == 0) {
                vector<int> subset = solve(nums, k, mp);
                if(ans.size() < subset.size()) {
                    ans = subset;
                }
            }
        }
        ans.push_back(nums[i]);
        return mp[i] = ans;
    }
    vector<int> largestDivisibleSubset(vector<int>& nums) {
    
        vector<int> ans = {};
        int n = nums.size();
        if(n == 0) {
            return ans;
        }
        unordered_map<int , vector<int>> mp;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < n; i++) {
            vector<int> subset = solve(nums , i, mp);
            ans = ans.size() < subset.size() ? subset : ans;
        }
        return ans;
    }
};