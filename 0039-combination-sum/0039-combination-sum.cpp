class Solution {
public:
    set<string> keys;
    string makeKey(vector<int> path) {
        sort(path.begin(), path.end());
        string key = "";
        for(int i = 0 ; i < path.size(); i++) {
            key += to_string(path[i]);
        }
        return key;
    }
    void backTrack(vector<int> &candidates, int target, vector<vector<int>> &ans,vector<int> path) {
        if(target == 0) {
            string pathKey = makeKey(path);
            if(keys.find(pathKey) == keys.end()) {
                keys.insert(pathKey);
                ans.push_back(path);
            }
            return;
        }
        for(int i = 0 ; i < candidates.size(); i++) {
            if(candidates[i] <= target) {
                target -= candidates[i];
                path.push_back(candidates[i]);
                backTrack(candidates,target,ans,path);
                target += candidates[i];
                path.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> path;
        backTrack(candidates, target,ans,path);
        return ans;
    }
};