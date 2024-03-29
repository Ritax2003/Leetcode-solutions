class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        unordered_map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        unordered_set<int> set;
        for(auto x :mp){
            if(set.count(x.second)==1) return false;
            set.insert(x.second);
        }
        return true;
    }
};