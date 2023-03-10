class Solution {
public:
    int minTimeToType(string word) {
        
        int ptr = 0;
        int ans = 0;
        
        for(int i = 0; i < word.length(); i++){
            ans += min(abs(word[i]-'a'-ptr), 26-abs(word[i]-'a'-ptr));
            ans++;
            ptr = word[i]-'a';
        }
        return ans;
    }
};