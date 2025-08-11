class Solution {
public:
    int maxArea(vector<int>& height) {
        int global = INT_MIN;
        int n = height.size();

        for(int i=0;i<n;i++){
            int hL = height[i];
            for(int j=i+1;j<n;j++){
                int hR = height[j];
                int current_area = (j-i)*min(hL,hR);
                global = max(global,current_area);
            }
        }
        return global;
    }
};