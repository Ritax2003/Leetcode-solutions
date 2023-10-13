class Solution {
public:
    
vector<int>generaterow(int n){
    long long ans = 1;
    vector<int> ansrow;
    ansrow.push_back(1); // initialize first row
    for(int col =1;col<n;col++){
        ans = ans*(n-col);
        ans = ans/col;
        ansrow.push_back(ans);
    }
    return ansrow;
}
vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            vector<int>currentrow = generaterow(i);
            ans.push_back(currentrow);
        }
        return ans;
    }
};