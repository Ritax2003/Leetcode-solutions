class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        unordered_map<int,int>mp;
        vector<pair<int,int>>vep;
        vector<int>res;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            int freq = x.second;
            while(freq!=0){
                vep.push_back({x.second,x.first});
                freq--;
            }
        }
        sort(vep.begin(),vep.end(),[](pair<int,int>&a,pair<int,int>&b){
            if(a.first == b.first) return a>b;
            return b>a;
        });
        for(auto x:vep){
            res.push_back(x.second);
        }
        return res;
    }
};