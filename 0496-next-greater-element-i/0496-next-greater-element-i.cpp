class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> nge;
        stack<int> st;
        for(int n : nums2){
            while(st.empty()!=1 and st.top()<n){
                nge[st.top()]=n;
                st.pop();
            }
            st.push(n);
        }

        while(st.empty()!=1){
            nge[st.top()]=-1;
            st.pop();
        }
        vector<int>res;
        for(int n : nums1){
            res.push_back(nge[n]);
        }
        return res;

    }
};