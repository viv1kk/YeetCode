class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        if(n < t.length()) return "";
        
        unordered_map<char,int>mp;
        for(char i : t) mp[i]++;
        
        int need = 0, total = t.size();
        int i = 0, j = 0;
        unordered_map<char, int>fr;
        
        int ansi = 0, ansj = n;
        while(j < n && i < n){
            if(mp.find(s[j]) != mp.end()){
                fr[s[j]]++;
                if(fr[s[j]] <= mp[s[j]]) need++;
            }    
            if(need < total){
                j++;
            }
            else{
                while(need >= total && i <= j){
                    if(j-i < ansj-ansi){
                        ansj = j, ansi = i;
                    }
                    if(mp.find(s[i]) != mp.end()){
                        fr[s[i]]--;
                        if(fr[s[i]] < mp[s[i]]) need--;
                    }
                    i++;
                }
                j++;
            }
        }
        cout<<ansi <<" "<<ansj<<endl;
        if(ansj == n) return "";
        return s.substr(ansi, ansj-ansi+1);
    }
};