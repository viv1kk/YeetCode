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
    
    int f(TreeNode* root){
        if(!root) return 0;
        int x = 1+f(root->left);
        int y = 1+f(root->right);
        
        return (abs(x-y) > 1 ||  x < 1 || y < 1)?-1:max(x, y);
    }
    
    bool isBalanced(TreeNode* root) {
        int x = f(root);
        if(x != -1)
            return true;
        return false;
    }
};