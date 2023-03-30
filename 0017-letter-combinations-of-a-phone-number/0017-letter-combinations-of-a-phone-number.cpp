class Solution {
public:
    
    vector<string>ans;
    void f(string digit, int ind, string&temp, vector<string>&str)
    {
        
          if(ind==digit.size()){
            ans.emplace_back(temp);
            return;
        }
        string value = str[digit[ind]-'0'];
        for(int i=0; i < value.size(); i++){
                temp+=value[i];
                f(digit, ind+1, temp, str);
                temp.pop_back();
       }
    }
    
    vector<string> letterCombinations(string digit) {
        if(digit.size() < 1) return {};
        vector<string>str(10);
        str[2] = "abc";
        str[3] = "def";
        str[4] = "ghi";
        str[5] = "jkl";
        str[6] = "mno";
        str[7] = "pqrs";
        str[8] = "tuv";
        str[9] = "wxyz";
        string temp;
        
        f(digit, 0, temp, str);
        return ans;
    }
};