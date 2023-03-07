class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>s = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>st;
        for(auto i : words)
        {
            string t = "";
            for(auto j : i) t += s[j-'a'];
            st.insert(t);
        }
        return st.size();
    }
};