struct Trie{
    Trie* node[26];
    bool flag;
    
    void insert(char c, Trie* newNode){
        node[c-'a'] = newNode;
    }
    void setEnd(){
        flag = true;
    }
    bool exists(char c){
        return (node[c-'a'] != NULL);
    }
    Trie* getToTrie(char c){
        return node[c-'a'];
    }
    bool isEnd(){
        return flag;
    }
};

class WordDictionary {
    Trie* node;
public:
    
    void insertTrie(string s, Trie* root)
    {
        for(char i : s)
        {
            if(!root->exists(i)){
                root->insert(i, new Trie());
            }
            root = root->getToTrie(i);
        }
        root->setEnd();
    }

    
    WordDictionary() {
        node = new Trie();
    }
    
    void addWord(string word) {
        insertTrie(word, node);
    }
    
    
    bool searchTrie(Trie* root, string &s, int ind, int size)
    {
        if(!root) return false;
        if(size == ind && root->isEnd()) return true;
        if(size <= ind) return false;
        bool x = false;
        if(s[ind] == '.')
        {
            for(int i = 0; i < 26 && !x; i++)
            {
                Trie* temp = root->getToTrie((char)('a'+i));
                if(temp)
                    x = x | searchTrie(temp, s, ind+1, size);
            }
        }
        else{
            if(root->exists(s[ind]))
                x = searchTrie(root->getToTrie(s[ind]), s, ind+1, size);
        }
        return x;
    }
    
    bool search(string word) {
        return searchTrie(node, word, 0, word.size());
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */