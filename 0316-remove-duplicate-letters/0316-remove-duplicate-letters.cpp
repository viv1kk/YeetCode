class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans = "";
        bool vis[255] = {false};
        int freq[255] = {0};
        int n = s.length();
        
        for(char i : s){
            freq[i]++;
        }
        
        for(int i = 0; i < n; i++)
        {
            freq[s[i]]--;
            if(vis[s[i]]) continue;
            while(!ans.empty() && ans.back()>s[i] && freq[ans.back()] > 0){
                vis[ans.back()] = false;
                ans.pop_back();
            }
            vis[s[i]] = true;
            ans += s[i];
        }
        return ans;
    }
};