class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n = s.length();
        int c = count(s.begin(), s.end(), letter);
        
        
        int x = floor(((double)c/(double)n)*100.0);
        return x;
    }
};