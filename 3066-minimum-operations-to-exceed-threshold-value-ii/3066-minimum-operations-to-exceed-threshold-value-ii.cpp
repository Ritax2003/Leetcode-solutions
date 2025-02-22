class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<long long int, vector<long long int>, greater<long long int>>pq;
        for(auto i:nums) pq.push(i);
        int cnt = 0;
        while(pq.top()<k){
            long long int f = pq.top();
            pq.pop();
            long long int s = pq.top();
            pq.pop();
            long long int x = min(f,s)*2+max(f,s);
            pq.push(x);
            cnt++;
        }
        return cnt;
    }
};