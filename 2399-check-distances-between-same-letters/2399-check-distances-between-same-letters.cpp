class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        for(int i = 0; i < s.length(); i++)
        {
            if(distance[s[i]-'a'] == -1)
                continue;

            int x = distance[s[i]-'a'];
            if(x+i+1 >= s.length()) return false;
            if(s[i] != s[i+x+1]) return false;
            distance[s[i]-'a'] = -1;
        }
        return true;
    }
};