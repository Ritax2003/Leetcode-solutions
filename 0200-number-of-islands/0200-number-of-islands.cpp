class Solution {
public:
    void dfs(int r,int c,vector<vector<char>>& grid, vector<pair<int,int>>& dir){
        int row = grid.size();
        int col = grid[0].size();
        grid[r][c]='0';
            for(pair<int,int>p :dir){
                int nr = r+p.first, nc = c+p.second;
                if(nr>=0 and nr <row && nc>=0 and nc<col and grid[nr][nc]=='1'){
                    dfs(nr,nc,grid,dir);
                }
            }
            
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()) return 0;
        int rows = grid.size();
        int cols = grid[0].size();
        int islandcount =0;
        
        vector<pair<int,int>>direction = {
            {-1,0},//left
            {1,0},//right
            {0,-1},//down
            {0,1}//up
        };
        for(int row=0;row<rows;row++){
            for(int col=0;col<cols;col++){
                if(grid[row][col]=='1'){
                    islandcount++;
                    dfs(row,col,grid,direction);
                }
            }
        }
        return islandcount;
    }
};