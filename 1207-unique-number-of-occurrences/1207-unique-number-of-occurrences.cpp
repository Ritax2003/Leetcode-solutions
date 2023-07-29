class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>st;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            st.insert(it.second);
        }
        return mp.size()==st.size();
    }
};