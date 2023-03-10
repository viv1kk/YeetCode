class Solution {
public:
    int similarPairs(vector<string>& words) {
        int count = 0;
        
        for(int i = 0; i < words.size(); i++)
        {
            set<char>a(words[i].begin(), words[i].end());
            for(int j = i+1; j < words.size(); j++)
            {
                set<char>b(words[j].begin(), words[j].end());
                if(a == b)
                    count++;
            }
        }
        return count;
    }
};