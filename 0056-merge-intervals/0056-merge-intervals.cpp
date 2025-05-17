class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n  = intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());

        for(auto in : intervals){
            if(ans.size()==0 or ans.back()[1] < in[0]) ans.push_back(in);
            else{
                ans.back()[1] = max( ans.back()[1] , in[1]);
            }
        }
        return ans;
    }
};