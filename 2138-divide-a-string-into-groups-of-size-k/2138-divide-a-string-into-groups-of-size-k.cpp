class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        
        int i = 0;
        
        while(i < s.length())
        {
            ans.push_back(s.substr(i, k));
            i+=k;
        }
        int l = ans.back().length();
        string x = "";
        x.insert(0, k-l, fill);
        ans.back() += x;
        return ans;
    }
};