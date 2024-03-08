class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int maxfreq = 0;
        
        for(auto[num,freq]:mp){
            maxfreq=max(maxfreq,freq);
        }
        int frequencyofmaxfreq=0;
        for(auto[num,freq]:mp){
            if(freq == maxfreq){
                frequencyofmaxfreq++;
            }
        }
        return maxfreq*frequencyofmaxfreq;
    }
};