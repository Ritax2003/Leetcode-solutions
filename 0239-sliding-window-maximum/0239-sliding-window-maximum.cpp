class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>res;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<k;i++) pq.push({nums[i],i});
        res.push_back(pq.top().first);

        for(int i=k;i<nums.size();i++){
            pq.push({nums[i],i});
            while(pq.top().second <= i-k) pq.pop();
            res.push_back(pq.top().first);
        }

        return res;
        
    }
};