class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>prefixmap;
        vector<vector<int>>ans;
        prefixmap[0]={-1};
        int prefixsum =0;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            if(prefixmap.find(prefixsum-k)!=prefixmap.end()){
                for(auto start : prefixmap[prefixsum-k]){
                    //vector<int>subarray(nums.begin()+start+1,nums.end()+i+1);
                    //ans.push_back(subarray);
                    cnt++;
                }
            }
            prefixmap[prefixsum].push_back(i);
        }
        return cnt;
    }
};