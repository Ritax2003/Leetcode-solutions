class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        //flip the row in case msb is 0 as 10000(16) > 01111 (15)
        // we want msb to be 1 
        for(int i =0;i<row;i++){
            if(grid[i][0]==0){
                for(int j=0;j<col;j++){
                    grid[i][j]^=1;
                }
            }
        }       
        //now in a column if number of are less and number of 0 are more then flip the colum
        // doing so we can get max number of 1's       
        for(int c = 0; c < col; c++) {
            int one = 0;
            int zero = 0;
            for(int r = 0 ; r < row ; r++) {
                if(grid[r][c] == 1) {
                    one++;
                } else {
                    zero++;
                }
            }
            //if number of 0 is more than number of 1 in a column then flip the bits in column 
            if(one < zero) {
                for(int r = 0 ; r < row ; r++) {
                    grid[r][c] ^= 1;
                }
            }
        }
        int ans=0;
        //calculate result
        for(int i=0;i<row;i++){
            int res = 0;
            int mul = 1;
            for(int j=col-1;j>=0;j--){
                res += grid[i][j]*mul;
                mul<<=1;
            }
            ans+=res;
        }
        
        return ans;
    }
};