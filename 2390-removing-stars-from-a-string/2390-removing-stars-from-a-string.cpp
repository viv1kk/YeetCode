class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        
        for(char i : s){
            if(ans == "")
                ans.push_back(i);
            else
            {
                char c = ans.back();
                if((i == '*' && c != '*' )|| (i != '*' && c == '*' ))
                    ans.pop_back();
                else
                    ans.push_back(i);
            }
        }
        
        return ans;
    }
};