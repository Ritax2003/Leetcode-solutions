class Solution {
public:
bool isRow(vector<vector<char>>& board,int row,char num,int COLS){
for(int i =0; i < COLS;i++){
if(board[row][i] == num) return false;
}
return true;
}
bool isCol(vector<vector<char>>& board,int col,char num,int ROWS){
for(int i =0;i < ROWS;i++){
if(board[i][col] == num) return false;
}
return true;
}
bool isGrid(vector<vector<char>>& board,int row,int col,char num,int ROWS,int COLS){
//starting row and starting column of that specific 3 x 3 grid
int rowfactor = row - (row%3);
int colfactor = col - (col%3);
for(int i =0 ; i < 3;i++){
for(int j =0; j < 3;j++){
int newrow = rowfactor + i;
int newcol = colfactor + j;
if(board[newrow][newcol] == num) return false;
}
}
return true;