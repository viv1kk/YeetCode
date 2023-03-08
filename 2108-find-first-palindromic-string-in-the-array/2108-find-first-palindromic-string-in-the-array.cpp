class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++)
        {
            string t = words[i];
            reverse(t.begin(), t.end());
            if(words[i] == t) return words[i];
        }
        return "";
    }
};