class Solution {
public:
void dfs(int r,int c,vector<vector<char>>& grid, vector<pair<int,int>> dir){
    int rows = grid.size();
    int cols = grid[0].size();
    grid[r][c]='0';

    for(pair<int,int>p:dir){
        int nr = r+p.first;
        int nc = c+p.second;
        if(nr>=0 and nr<rows and nc>=0 and nc<cols and grid[nr][nc]=='1'){
            dfs(nr,nc,grid,dir);
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0) return 0;
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        vector<pair<int,int>>dir={{-1,0},{1,0},{0,1},{0,-1}};

        for(int i =0;i<rows;i++){
            for(int j =0;j<cols;j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(i,j,grid,dir);
                }
            }
        }
        return count;
    }
};