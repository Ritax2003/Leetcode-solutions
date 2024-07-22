class Solution {
public:
   
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> res;
        vector<pair<string,int>>mp;
        for(int i=0;i<heights.size();i++){
            mp.push_back({names[i],heights[i]});
        }
        
        sort(mp.begin(),mp.end(),[](pair<string,int> &a, pair<string,int>&b){
            return a.second>b.second;
        });
        
        for(auto x:mp){
            res.push_back(x.first);
        }
        return res;
    }
};