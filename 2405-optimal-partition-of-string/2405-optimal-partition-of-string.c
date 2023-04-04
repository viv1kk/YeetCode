int partitionString(char * s){
        bool c[26] = {false};
        
        int count = 1;
        for(int i = 0; s[i] !='\0'; i++)
        {
            if(c[s[i]-'a'])
            {
                for(int k = 0; k < 26; k++){ c[k] = false; }
                ++count;
            }
            c[s[i]-'a'] = true;
        }
        return count;
}