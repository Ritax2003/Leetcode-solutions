class Solution {
public:
    bool present(vector<int> n , int k){
        int start = 0;
        int end = n.size() -1;
        while(start<=end){
           int mid = start + (end-start)/2;
            if(n[mid]==k) return true;
            if(k<n[mid]) end = mid-1;
            else start = mid +1;
        }
        return false;
    }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<vector<int>> ans(2);
        for(int i=0; i<nums1.size(); i++){
            if(i > 0 && nums1[i] == nums1[i-1]) continue ;

            if(!present(nums2,nums1[i])) ans[0].push_back(nums1[i]) ;
        }

        for(int i=0; i<nums2.size(); i++){
            if(i > 0 && nums2[i] == nums2[i-1]) continue ;

            if(!present(nums1,nums2[i])) ans[1].push_back(nums2[i]) ;
        }

        return ans ;
        
    }
};