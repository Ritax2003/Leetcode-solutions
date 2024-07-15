class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>st;
        for(auto x: candyType) st.insert(x);
        return min(candyType.size()/2 ,st.size());
    }
};