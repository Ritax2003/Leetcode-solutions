class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nge;
        stack<int> st;

        // Traverse nums2 to find next greater elements
        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                nge[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        // Elements left in stack have no NGE, so mark them as -1
        while (!st.empty()) {
            nge[st.top()] = -1;
            st.pop();
        }

        // Prepare result for nums1
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nge[num]);
        }
        return result;
    }
};