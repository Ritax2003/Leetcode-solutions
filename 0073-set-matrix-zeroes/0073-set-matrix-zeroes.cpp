class Solution {
public:
    void setZeroes(vector<vector<int>>&matrix) {
        int m=matrix.size(), n=matrix[0].size();
        vector<int>rowsArray(m,0);
        vector<int>colsArray(n,0);
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    rowsArray[i]=1;
                    colsArray[j]=1;
                }
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rowsArray[i]||colsArray[j])
                    matrix[i][j]=0;
            }
        }
    }
};