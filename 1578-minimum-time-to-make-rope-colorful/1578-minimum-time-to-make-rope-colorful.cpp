class Solution {
public:
    void IOHack(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int res = 0;
        stack<pair<char,int>> st;
        for(int i =0;i<n;i++){
            if(st.empty()!=1 and st.top().first == colors[i]){//consecutive letters are same
               if(st.top().second > neededTime[i]){//
                   res+=neededTime[i];
               } 
                else{
                    res += st.top().second;
                    st.pop();
                    st.push({colors[i],neededTime[i]});
                }
            }
            else{
                st.push({colors[i],neededTime[i]});//consecutive letters are different
            }
        }
        return res;
    }
};