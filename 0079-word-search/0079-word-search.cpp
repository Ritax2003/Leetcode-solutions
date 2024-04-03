class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
        for(int i =0;i<board.size();i++){
            for(int j =0;j<board[0].size();j++){
                if (dfs(board,i,j,word))  return true;
            }
        }
        return false;
    }
    
    bool dfs(vector<vector<char>>&board,int x,int y,string word){
        if(word.empty()) return true;
        if(x >= board.size() or y>=board[0].size()) return false;
        
        char c = board[x][y];
        if(c!=word.front()) return false;
        board[x][y]='*';
        
        word = word.substr(1);
        
        bool res = dfs(board,x+1,y,word) or dfs(board,x-1,y,word) or dfs(board,x,y+1,word) or dfs(board,x,y-1,word);
        board[x][y] = c;
        return res;
        
    }
   
};