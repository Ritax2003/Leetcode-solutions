class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixcnt;
        prefixcnt[0]=1;
        int cnt=0;
        int prefixsum=0;
        for(int num:nums){
            prefixsum+=num;
            if(prefixcnt.find(prefixsum-k)!=prefixcnt.end()){
                cnt+=prefixcnt[prefixsum-k];
            }

            prefixcnt[prefixsum]++;
        }
        return cnt;
    }
};