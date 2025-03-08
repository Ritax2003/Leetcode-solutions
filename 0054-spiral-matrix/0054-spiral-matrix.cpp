class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int total = rows*cols;
        int rowstart = 0;
        int rowend = rows-1;
        int colstart = 0;
        int colend=cols-1;
        int count =0;
        vector<int>res;
        while(count<total){
            for(int i = colstart;i<=colend;i++){
                    res.push_back(matrix[rowstart][i]);
                    count++;
            }
            rowstart++;
            for(int i=rowstart;i<=rowend;i++){
                res.push_back(matrix[i][colend]);
                count++;
            }
            colend--;
            if(rowend>=rowstart){
            for(int i=colend;i>=colstart;i--){
                res.push_back(matrix[rowend][i]);
                count++;
            }}
            rowend--;
            if(colstart<=colend){
            for(int i=rowend;i>=rowstart;i--){
                res.push_back(matrix[i][colstart]);
                count++;
            }}
            colstart++;

        }
        return res;
    }
};