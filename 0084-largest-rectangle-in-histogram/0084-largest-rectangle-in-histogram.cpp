class Solution {
public:
int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        stack<int> st;
        int ans = 0;
        for(int i=0; i<heights.size(); i++) {
            while(!st.empty() and heights[st.top()] > heights[i]) {
                int h = heights[st.top()];
                st.pop();
                if(st.empty()) ans = max(ans, h * i);
                else {
                    int l = i - st.top() - 1;
                    ans = max(ans, h * l);
                }
            }
            st.push(i);
        }
        return ans;
    }
};