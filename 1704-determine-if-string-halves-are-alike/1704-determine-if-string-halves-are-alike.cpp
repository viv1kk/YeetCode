class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_map<char, int> mp;
        int n = s.length();
        string st = "aeiouAEIOU";
        
        unordered_map<char, int>sr;
        for(auto i : st)
        {
            sr[i]++;
        }
        int count = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(sr.find(s[i]) != sr.end())
            {
                if(i < n/2)
                    count++;
                else
                    count--; 
            }
        }
        return count==0;
    }
};