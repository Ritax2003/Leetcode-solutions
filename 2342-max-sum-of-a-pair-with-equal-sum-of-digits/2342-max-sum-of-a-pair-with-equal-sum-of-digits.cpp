#include<bits/stdc++.h>
class Solution {
public:
    int digsum(int n){
        int i = n;
        int res=0;
        while(i!=0){
            res+=i%10;
            i/=10;
        }
        return res;
    }
    int maximumSum(vector<int>& nums) {
       unordered_map<int,vector<int>>diggroup;
       for(int num : nums){
        int dsum = digsum(num);
        diggroup[dsum].push_back(num);
       }
       int maxsum = -1;
       for( auto&[dsum, group] : diggroup){
        if(group.size() > 1){
            sort(group.rbegin(),group.rend());
            maxsum = max(maxsum, group[0]+group[1]);
        }
       }
       return maxsum;
    }
};