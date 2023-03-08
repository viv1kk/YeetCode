class Solution {
public:
    bool squareIsWhite(string coordinates) {
        bool x = (coordinates[1]&1);
        bool y = (coordinates[0]&1);
        return (x^y);
    }
};