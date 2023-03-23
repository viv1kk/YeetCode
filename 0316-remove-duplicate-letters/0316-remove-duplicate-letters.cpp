class Solution {
public:
    string removeDuplicateLetters(string s) {
        bool vis[26] = {false};
        unordered_map<char, int> mp;
        int n = s.length();
        string res = "";
        for(char i : s) mp[i]++;
        for(char c : s){
            mp[c]--;
            if(vis[c-'a'])continue;
            
            while(!res.empty() && res.back()>c && mp[res.back()] > 0){
                vis[res.back()-'a']=false;
                res.pop_back();
            }
            vis[c-'a'] = true;
            res += c;
        }
        return res;
    }
};