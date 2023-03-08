class Solution {
public:
    bool squareIsWhite(string coordinates) {
        bool x = (coordinates[1])%2;
        bool y = (coordinates[0])%2;
        return (x^y);
    }
};