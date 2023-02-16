class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        vector<int>left(n);
        vector<int>right(n);
        
        int mx = 0;
        
        for(int i = 0 ; i < n; i++)
        {
            mx = max(mx, height[i]);
            left[i] = mx;
        }
        
        mx = 0;
        for(int i = n-1; i >= 0; i--)
        {
            mx = max(mx, height[i]);
            right[i] = mx;
        }
        
//         for(int i : left)
//             cout<<i<<", ";
//         cout<<endl;
        
//         for(int i : right)
//             cout<<i<<", ";
//         cout<<endl;
        
        int i =0 , j = n-1;
        mx = 0;
        while(i < j)
        {
            // cout<<mx<<" ";
            if(left[i] < right[j])
            {
                mx = max(mx, left[i]*(j-i));
                i++;
            }
            else
            {
                mx = max(mx, right[j]*(j-i));
                j--;
            }
        }
        
        return mx;
    }
};