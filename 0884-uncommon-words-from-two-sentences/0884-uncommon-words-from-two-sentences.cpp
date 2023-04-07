class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        s1 += " ";
        s2 += " ";
        
        unordered_map<string, int>m1, m2;
        
        string temp = "";
        
        for(int i = 0; i < s1.length(); i++)
        {
            if(s1[i] == ' ')
            {
                m1[temp]++;
                temp = "";
            }
            else temp += s1[i];
        }
        temp = "";
        for(int i = 0; i < s2.length(); i++)
        {
            if(s2[i] == ' ')
            {
                m2[temp]++;
                temp = "";
            }
            else temp += s2[i];
        }
        
        vector<string>ans;
        
        for(auto i : m1)
        {
            if(m2.find(i.first) == m2.end() && i.second == 1)
                ans.push_back(i.first);
        }
        for(auto i : m2)
        {
            if(m1.find(i.first) == m1.end() && i.second == 1)
                ans.push_back(i.first);
        }
        return ans;
    }
};