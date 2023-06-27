class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
       //to store ans:
        vector<vector<int>> ans;
        //priority queue(max heap)
        priority_queue<pair<int,pair<int,int>>> pq;
        //calculating sum
        for(int i =0;i<nums1.size();i++){
            for(int j =0;j<nums2.size();j++){
                int sum = nums1[i]+nums2[j];
                // checking the size of pq
                if(pq.size()<k){
                    pq.push({sum,{nums1[i],nums2[j]}});
                }
                //we got new pair whose sum is less than top
                else if(sum<pq.top().first){
                    pq.pop();
                    pq.push({sum,{nums1[i],nums2[j]}});
                }
                //don't push
                else if(sum>pq.top().first) break;
            }
        }
    //copy pq in ans
    while(k!=0 and pq.empty()!=1){
        ans.push_back({pq.top().second.first,pq.top().second.second});
        pq.pop();
        k--;
    }
    return ans;
  }
};