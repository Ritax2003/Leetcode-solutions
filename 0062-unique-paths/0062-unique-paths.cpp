class Solution {
public:
    int helper(int i, int j,int m,int n,vector<vector<int>>&grid){
        if(i>=m or j>=n) return false;
        if(i==m-1 and j==n-1) return true;
        if(grid[i][j]!=0) return grid[i][j];
        int right = helper(i+1,j,m,n,grid);
        int down = helper(i,j+1,m,n,grid);
        grid[i][j]= right+down;
        return grid[i][j];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>grid(m+1,vector<int>(n+1,0));
        return helper(0,0,m,n,grid);
    }
};