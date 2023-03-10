class Solution {
public:
    int percentageLetter(string s, char letter) {
        return floor(((double)count(s.begin(), s.end(), letter)/(double)s.length())*100.0);
    }
};