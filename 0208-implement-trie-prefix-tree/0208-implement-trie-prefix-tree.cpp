struct Node{
    Node* trie[26];
    bool flag = false;
    
    bool containsChar(char c){
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
    bool isEnd(){
        return flag;
    }
};

class Trie {
private:
    Node* root; 
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node *head = root;
        for(int i = 0; i < word.length(); i++){
            if(!head->containsChar(word[i]))
                head->addNewChar(word[i], new Node());
            head = head->getToNode(word[i]);
        }
        head->setEnd();
    }
    
    bool search(string word) {
        Node* head = root;
        for(int i = 0; i < word.size(); i++)
        {
            if(!head->containsChar(word[i])) return false;
            head = head->getToNode(word[i]);
        }
        return (head->isEnd());
    }
    
    bool startsWith(string prefix) {
        Node* head = root;
        for(int i = 0; i < prefix.length(); i++)
        {
            if(!head->containsChar(prefix[i])) return false;
            head = head->getToNode(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */