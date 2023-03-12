class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string a = "", b = "", c = "";
        for(int i = 0; i < firstWord.length(); i++)
        {
            a += firstWord[i]+('0'-'a');
        }
        for(int i = 0; i < secondWord.length(); i++)
        {
            b += secondWord[i]+('0'-'a');
        }
        for(int i = 0; i < targetWord.length(); i++)
        {
            c += targetWord[i]+('0'-'a');
        }
        int x = stoi(a);
        int y = stoi(b);
        int z = stoi(c);
        return (x + y == z);
    }
};