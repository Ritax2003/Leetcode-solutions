class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>ust;
        for(auto x : arr){
            if(ust.count(2*x)|| ((x%2==0) && ust.count(x/2))){
                return true;
            }
            ust.insert(x);
        }
        return false;
    }
};