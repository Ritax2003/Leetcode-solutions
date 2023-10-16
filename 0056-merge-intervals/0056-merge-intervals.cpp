class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            //check if ans is empty or last ans element's upper is lower than current arr's lower
            if(ans.empty() || ans.back()[1] < arr[i][0]){
                //disconnected(not-overlapping) interval
                ans.push_back(arr[i]);
            }
            else{
                //if not , the upper will be max of these two.
                ans.back()[1] = max(ans.back()[1],arr[i][1]);
            }
        }
        return ans;
    }
};