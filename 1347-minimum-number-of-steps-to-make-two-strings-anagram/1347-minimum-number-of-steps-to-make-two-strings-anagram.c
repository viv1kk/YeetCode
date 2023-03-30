int minSteps(char * s, char * t){
    int f[127] = {0}, n = 0, count = 0, i = 0;
    
    char c= s[0];
    while (c !='\0'){
        ++f[c];
        c = s[++n];
    } 
    for(i = 0; i < n; ++i)
    {
        if(f[t[i]] == 0) ++count;
        else --f[t[i]];
    }
    return count;
}