class Solution {
public:
vector<vector<string>>sols;
bool issafe(vector<string>& board,int row, int col){
    int n =board.size();
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q') return false;
        if(row-i>=0 and col-i>=0 and board[row-i][col-i]=='Q') return false;
        if(row-i>=0 and col+i<n and board[row-i][col+i]=='Q') return false;
    }
    return true;
}
void solve(vector<string>&board,int row){
    if(row == board.size()){
        sols.push_back(board);
        return ;
    }
    for(int col=0;col<board.size();col++){
        if(issafe(board,row,col)){
            board[row][col]='Q';
            solve(board,row+1);
            board[row][col]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        solve(board,0);
        return sols;
    }
};