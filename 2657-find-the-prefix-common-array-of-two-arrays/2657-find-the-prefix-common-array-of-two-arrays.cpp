class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> ans;
        vector<bool> seen(n,0);
        int common = 0;

        for(int i=0;i<n;i++){
            if(seen[A[i]] == 0) seen[A[i]] =1;
            else if (seen[A[i]] == 1) common+=1;
            if(seen[B[i]] == 0) seen[B[i]] =1;
            else if (seen[B[i]] == 1) common+=1;
            ans.push_back(common);
        }
        return ans;
    }
};