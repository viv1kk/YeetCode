class Solution {
public:
    int compress(vector<char>& c) {
        int n = c.size(), i = 0;
        while(i < n)
        {
            int j = i;
            int count = 1;
            while(j+1 < n && c[j+1] == c[i]){ j++; count++; }
            if(count == 1) { i++; continue;}
            string s = to_string(count);
            for(auto k : s){ c[i+1] = k; i++; }
            while(i+1 <= j){ c[i+1] = '\0'; i++; }
            i++;
        }
        int p=0, q= 0;
        while(p < n && q < n)
        {
            if(c[p] !='\0' && c[q] != '\0'){ p++; q++; }
            else if(c[q] != '\0') swap(c[p++], c[q++]);
            else if(c[p] == '\0') q++;
        }
        while(c.back()== '\0'){ c.pop_back(); }
        return (int)c.size();
    }
};