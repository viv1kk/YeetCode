struct Node{
    Node* trie[26];
    bool flag = false;
    
    bool containsChar(char c){
        if(c =='0') return false;
        return trie[c-'a'] != NULL;
    }
    
    void addNewChar(char c, Node* ref){
        trie[c-'a'] = ref;
    }
    Node* getToNode(char c){
        return trie[c-'a'];
    }
    
    void setEnd(){
        flag = true;
    }
    void resetEnd(){
        flag = false;
    }
    bool isEnd(){
        return flag;
    }
};


class Solution {
public:
    void insert(string word, Node* root) {
        Node *head = root;
        int n = word.length();
        for(int i = 0; i < n; i++){
            if(!head->containsChar(word[i]))
                head->addNewChar(word[i], new Node());
            head = head->getToNode(word[i]);
        }
        head->setEnd();
    }
    
    bool search(string word, Node* root) {
        Node* head = root;
        int n = word.length();
        for(int i = 0; i < n; i++)
        {
            if(!head->containsChar(word[i])) return false;
            head = head->getToNode(word[i]);
        }
        return (head->isEnd());
    }
    
    vector<string>ans;
    void f(vector<vector<char>>& board, int i, int j, int m, int n, string s, Node* trie)
    {
        if(i < 0 || i >= m || j < 0 || j >= n || board[i][j] == '0') return;
        
        s += board[i][j];
        if(trie->containsChar(board[i][j]))
        {
            char temp = board[i][j];
            trie = trie->getToNode(temp);
            if(trie->isEnd()){
                ans.emplace_back(s);
                trie->resetEnd();
            }
            board[i][j] = '0';
            f(board, i-1, j, m, n, s, trie);
            f(board, i+1, j, m, n, s, trie);
            f(board, i, j-1, m, n, s, trie);
            f(board, i, j+1, m, n, s, trie);
            board[i][j] = temp;
            
        }
    }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& word) {
        int m = board.size(), n = board[0].size();  
        Node* root = new Node();
        
        for(int i = 0; i < word.size(); i++){
            insert(word[i], root);
        }
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(root->containsChar(board[i][j]))
                   f(board, i, j, m, n, "", root);
            }
        }
        return ans;
    }
};