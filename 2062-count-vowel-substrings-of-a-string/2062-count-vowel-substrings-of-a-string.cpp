class Solution {
public:
    int countVowelSubstrings(string word) {
        int n = word.length();
        string s = "aeiou";
        int count = 0;
        unordered_set<char>t;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                if(s.find(word[j]) != -1)
                {
                    t.insert(word[j]);
                }
                else break;
                if(t.size() == 5)
                    count++;
            }
            t = unordered_set<char>();
        }
        return count;
    }
};