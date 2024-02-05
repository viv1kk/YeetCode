class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        if(n < t.length()) return "";
        
        int mp[128] = {0};
        for(char i : t) mp[i]++;
        
        int need = 0, total = t.size();
        int i = 0, j = 0;
        
        int fr[128] = {0};
        
        int ansi = 0, ansj = n;
        while(j < n && i < n){
            if(mp[s[j]]){
                fr[s[j]]++;
                if(fr[s[j]] <= mp[s[j]]) need++;
            }    
            while(need >= total && i <= j){
                if(j-i < ansj-ansi){
                    ansj = j, ansi = i;
                }
                if(mp[s[i]]){
                    fr[s[i]]--;
                    if(fr[s[i]] < mp[s[i]]) need--;
                }
                i++;
            }
            j++;
        }
        if(ansj == n) return "";
        return s.substr(ansi, ansj-ansi+1);
    }
};