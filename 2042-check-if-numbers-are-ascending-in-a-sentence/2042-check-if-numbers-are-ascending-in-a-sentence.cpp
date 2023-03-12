class Solution {
public:

    bool areNumbersAscending(string s) {
        vector<int>a;
        
        s += ' ';
        string t = "";
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == ' ' && t != "")
            {
                a.push_back(stoi(t));
                t = "";
            }
            if(s[i] >= '0' && s[i] <= '9')
                t+=s[i];   
        }
        return is_sorted(a.begin(), a.end(), [&](int a, int b){return a <= b;});
    }
};