class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int count = 0, n = s.length(), flag = 0;
        while(1)
        {
            flag = 0;
            for(int i = 1; i < n; i++)
            {
                if(s[i-1]=='0' && s[i] == '1')
                {
                    s[i-1] = '1';
                    s[i]= '0';
                    i++;
                    flag = 1;
                }
            }
            if(flag) count++;
            if(!flag) break;
        }
        return count;
    }
};