class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        vector<pair<int,char>>v;
        string ans = "";
        
        for(char c :s){
            mp[c]++;
        }
        
        for(auto x:mp){
            v.push_back({x.second,x.first});
        }
        
        sort(v.begin(), v.end(), greater<pair<int, char>>());
         for(auto i: v){
            while(i.first--) ans += i.second;
        }
        return ans;
        
    }
};