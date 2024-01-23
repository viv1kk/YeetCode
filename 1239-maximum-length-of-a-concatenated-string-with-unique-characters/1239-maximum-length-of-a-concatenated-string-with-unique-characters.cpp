class Solution {
public:
    int f(vector<string>&arr, int i, int n, string s){
        if(i == n)return 0;

        int fr[26] = {0};
        bool valid = true;
        for(int j = 0; j < arr[i].size(); j++){
            if(fr[arr[i][j]-'a'] == 0)
                fr[arr[i][j]-'a']++;
            else{valid = false; break;}
        }
        
        if(valid){
            for(int j = 0; j < s.size(); j++){
                if(fr[s[j]-'a'] > 0){
                    valid = false;
                    break;
                }
            }
        }
        
        if(valid){
            return max((int)(arr[i].size() + f(arr, i+1, n, s+arr[i])) , f(arr, i+1, n, s)) ;
        }
        else return f(arr, i+1, n, s);
    }
    
    int maxLength(vector<string>& arr) {
        return f(arr, 0, arr.size(), "");
    }
};