class Solution {
public:
    
    void f(vector<vector<int>>&image, int i, int j, int c, int x)
    {
        if(i >= image.size() || j >= image[0].size() || i < 0 || j < 0) return;
        if(image[i][j] != x) return;
        image[i][j] = c;
        f(image, i+1, j, c, x);
        f(image, i-1, j, c, x);
        f(image, i, j+1, c, x);
        f(image, i, j-1, c, x);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int x = image[sr][sc];
        if(x == color) return image;
        f(image , sr, sc, color, x);
        return image;
    }
};