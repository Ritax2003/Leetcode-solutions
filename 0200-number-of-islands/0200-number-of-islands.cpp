class Solution {
public:
    void dfs(int r,int c,vector<vector<char>>& grid, vector<pair<int,int>>& dir){
        int rows = grid.size();
        int cols = grid[0].size();
        grid[r][c]='0';
        
        for(pair<int,int>p:dir){
            int nr = r+p.first,nc = c+p.second;
            if(nr>=0 and nr<rows and nc >=0 and nc<cols and grid[nr][nc]=='1'){
                dfs(nr,nc,grid,dir);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()) return 0;
        int rows = grid.size();
        int cols = grid[0].size();
        int count=0;
        vector<pair<int,int>>dir={
            {-1,0},{1,0},{0,-1},{0,1}
        };
        
        for(int r=0;r<rows;r++){
            for(int c=0;c<cols;c++){
                if(grid[r][c]=='1'){
                    count++;
                    dfs(r,c,grid,dir);
                }
            }
        }
        return count;
    }
};