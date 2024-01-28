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
    int f(TreeNode* root, int &ans){
        if(!root) return 0;
        int l = 0;
        int r = 0;
        if(root->left)
            l = 1+f(root->left, ans);
        if(root->right)
            r = 1+f(root->right, ans);
        ans = max(ans, l+r);
        return max(l, r);
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        f(root, ans);
        return ans;
    }
};