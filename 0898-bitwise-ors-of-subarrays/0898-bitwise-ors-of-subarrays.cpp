class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int>uniqueOR;
        unordered_set<int>prevOR;
        for(int a : arr){
            unordered_set<int> newOR;
            newOR.insert(a);

            for(int num : prevOR) newOR.insert(a|num);
            prevOR = newOR;
            uniqueOR.insert(prevOR.begin(),prevOR.end());

        }
        return uniqueOR.size();
    }
};