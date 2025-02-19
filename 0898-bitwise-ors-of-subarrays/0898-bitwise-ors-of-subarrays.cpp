class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int>uniqueOR;
        unordered_set<int>prevOR;

        for(int num:arr){
            unordered_set<int>newOR;
            newOR.insert(num);

            for(int val:prevOR){
                newOR.insert(val|num);
            }

            prevOR=newOR;
            uniqueOR.insert(prevOR.begin(),prevOR.end());
        }

        return uniqueOR.size();
    }
};