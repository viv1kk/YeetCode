class Solution {
public:
    
    int numRookCaptures(vector<vector<char>>& board) {
        int x=0, y=0;
        
        // find rook;
        
        for(int i = 0; i < 8; i++)
        {
            int flag = 0;
            for(int j = 0; j < 8; j++)
            {
                if(board[i][j] == 'R')
                {
                    x = j;
                    y = i;
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) break;
        }
    
        int ans=0;
        for(int i = x; i < 8; i++)
        {   if(board[y][i] == 'B'){break;}
            if(board[y][i] == 'p'){ans++; break;}
        }
        for(int i = x; i >= 0; i--)
        {
            if(board[y][i] == 'B'){break;}
            if(board[y][i] == 'p'){ans++; break;}
        }
        
        for(int i = y; i >= 0; i--)
        {
            if(board[i][x] == 'B'){break;}
            if(board[i][x] == 'p'){ans++; break;}
        }
        for(int i = y; i < 8; i++)
        {
            if(board[i][x] == 'B'){break;}
            if(board[i][x] == 'p'){ans++; break;}
        }
        return ans;
    }
};