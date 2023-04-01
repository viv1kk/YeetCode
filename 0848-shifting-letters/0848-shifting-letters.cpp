class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.length();
        
        long long sum = 0;
        for(int i = n-1; i >= 0; i--)
        {
            sum += shifts[i];
            long long x = (s[i]-'a');
                x += sum;
                x = x%26;
            s[i] = (char)(x+'a');
        }
        return s;
    }
};