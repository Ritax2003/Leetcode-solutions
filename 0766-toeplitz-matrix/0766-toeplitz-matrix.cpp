class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        // compare each row to the next row shifted by 1 
        for (int i = 1; i < matrix.size(); i++)
            for (int j = 0; j < matrix[0].size()-1; j++)
                if (matrix[i-1][j] != matrix[i][j+1]) return false;
        return true;
    }
};