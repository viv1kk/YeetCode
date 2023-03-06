class Solution {
public:
    string decodeMessage(string key, string message) {
        int x = 0;
        unordered_map<char, int>mp;
        for(int i = 0; i < key.length(); i++)
        {
            if(key[i] == ' ')continue;
            if(mp.find(key[i]) == mp.end()) mp[key[i]] = x++;
        }
        string ans = "";
        
        for(int i = 0; i < message.length(); i++)
        {
            if(message[i] == ' ') 
                ans += ' ';
            else
                ans += 'a'+mp[message[i]];
        }
        
        return ans;
    }
};