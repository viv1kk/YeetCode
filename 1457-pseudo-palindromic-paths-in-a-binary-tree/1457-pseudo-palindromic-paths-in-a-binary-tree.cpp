/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:    
    int f(TreeNode* root, unordered_map<int, int>&mp){
        if(!root) return 0;
        mp[root->val]++;
        if(root->left == nullptr && root->right == nullptr){
            int odd = 0;
            int tot = 0;
            for(auto&[i, j] : mp){
                if(j%2 == 1) odd++;
                if(odd > 1){
                    mp[root->val]--;
                    return 0;
                }
                tot+=j;
            }
            mp[root->val]--;
            return ((tot%2== 0 && odd == 0) || (tot%2 == 1 && odd == 1));
        }
              
        int ans = f(root->left,mp) + f(root->right, mp);   
        mp[root->val]--;
        if(mp[root->val] == 0) 
            mp.erase(root->val);
        return ans;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        unordered_map<int,int>mp;
        return f(root, mp);
    }
};