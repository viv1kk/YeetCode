class Solution {
public:
    
    bool f(vector<vector<char>>& board, int x, int y){
        int f[9] = {0};
        for(int i = x; i < x+3; i++){
            for(int j = y; j < y+3; j++){
                if(board[i][j] == '.') continue;
                else if(f[board[i][j]-'1'] == 0){
                    f[board[i][j]-'1']++;
                }
                else return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9;
        
        int h[9][9], v[9][9];
        memset(h, 0, sizeof h);
        memset(v, 0, sizeof v);
        
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++){
                if(board[i][j] == '.')continue;
                if(h[i][board[i][j]-'1'] > 0) return false;
                h[i][board[i][j]-'1']++;
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++){
                if(board[i][j] == '.')continue;
                if(v[board[i][j]-'1'][j] > 0) return false;
                v[board[i][j]-'1'][j]++;
            }
        }
        for(int i = 0; i < n; i+=3){
            for(int j = 0; j < n; j+= 3){
                if(!f(board, i, j))return false;
            }
        }
        return true;
    }
        
};