int minSteps(char * s, char * t){
    int f[127] = {0};
    int n = 0;
    while(s[n] !='\0') ++f[s[n++]];
    int count = 0;
    for(int i = 0; i < n; ++i)
    {
        if(f[t[i]] == 0) ++count;
        else --f[t[i]];
    }
    return count;
}