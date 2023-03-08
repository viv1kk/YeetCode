class Solution {
public:
    bool squareIsWhite(string coordinates) {
        bool x = (coordinates[1]-'0')%2;
        bool y = (coordinates[0]-'a')%2;
        return !(x^y);
    }
};