class Solution {
public:
    int countpaths(int i,int j,int m,int n, vector<vector<int>>&grid){
        if(i>=m or j>=n) return false;
        if(i==m-1 and j==n-1) return true;
        if(grid[i][j]!=-1) return grid[i][j];

        int down = countpaths(i+1,j,m,n,grid);
        int right = countpaths(i,j+1,m,n,grid);

        grid[i][j]= down+right;
        return grid[i][j];

    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>grid(m+1,vector<int>(n+1,-1));
        return countpaths(0,0,m,n,grid);
    }
};