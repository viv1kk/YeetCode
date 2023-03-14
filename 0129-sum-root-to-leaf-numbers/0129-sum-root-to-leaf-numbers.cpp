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
    int x = 0;
    void f(TreeNode* root, int ans)
    {
        if(!root) return; 
        if(root && (!root->left && !root->right)){
            
            ans *= 10;
            ans += root->val;
            x += ans; return;
        }
        ans *= 10;
        ans += root->val;
        
        f(root->left, ans);
        f(root->right, ans);   
    }

    int sumNumbers(TreeNode* root) {
        f(root, 0);
        return x;
    }
};