class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        
        for(auto i : s){
            if(ans == "")
                ans.push_back(i);
            else
            {
                if((i == '*' && ans.back() != '*' )|| (i != '*' && ans.back() == '*' ))
                    ans.pop_back();
                else
                    ans.push_back(i);
            }
        }
        
        return ans;
    }
};