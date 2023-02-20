class Solution {
public:
    bool f(vector<vector<char>>& board, string word, int x, int y, int m, int n, int ind)
    {
        if(x < 0 || y < 0 || x >= m || y >= n || board[x][y] != word[ind]) return false;
        if(ind == word.length()-1) return true;
        bool ans = false;
        ind++;
        char temp = board[x][y];
        board[x][y] = '0';
        ans = ans | f(board, word, x-1, y, m, n, ind);
        ans = ans | f(board, word, x+1, y, m, n, ind);
        ans = ans | f(board, word, x, y-1, m, n, ind);
        ans = ans | f(board, word, x, y+1, m, n, ind);
        board[x][y] = temp;
        return ans;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(), n = board[0].size();
        // vector<vector<bool>>vis(m, vector<bool>(n, false));
        
        bool ans = false;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(word[0] == board[i][j])
                    ans = f(board, word, i, j, m, n, 0);
                if(ans) return true;
            }
        }
        return false;
    }
};