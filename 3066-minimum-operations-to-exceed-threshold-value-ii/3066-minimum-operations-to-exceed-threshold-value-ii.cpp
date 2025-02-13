class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<long long int,vector<long long int>,greater<long long int>>pq;
        for(auto it: nums){
            pq.push(it);
        }

        long long int cnt = 0;
        while(pq.top()<k){
            long long int f = pq.top();
            pq.pop();
            long long int s = pq.top();
            pq.pop();
            long long int num = 2*min(f,s)+max(f,s);
            pq.push(num);
            cnt++;
        }

        return cnt;
    }
};