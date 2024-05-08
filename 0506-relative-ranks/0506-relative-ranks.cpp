class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>copy= score;
        sort(copy.begin(),copy.end(),greater<int>());
        vector<string>ans;
        vector<string> rank = {"Gold Medal","Silver Medal","Bronze Medal"};
        unordered_map<int,string> map;
        for(int i =0;i<copy.size();i++){
            if(i<3){
                map[copy[i]] = rank[i];
            }
            else{
                map[copy[i]] = to_string(i+1);
            }
        }
        
        for(auto x:score){
            ans.push_back(map[x]);
        }
        return ans;
    }
};