class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>pmap;
        pmap[0]={-1};
        int cnt = 0;
        vector<vector<int>>res;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem = (((sum%k)+k)%k);
            if(pmap.find(rem)!=pmap.end()){
                for(auto start : pmap[rem]){
                    vector<int>temp(nums.begin()+start+1,nums.begin()+i+1);
                    cnt++;
                    res.push_back(temp);
                }
            }
            pmap[rem].push_back(i);
        }
        return cnt;
    }
};