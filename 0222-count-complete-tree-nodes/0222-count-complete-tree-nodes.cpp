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
    int countNodes(TreeNode* root) {
        if(root == NULL)
            return 0;
        // if(root->left == NULL && root->right==NULL)
        //     return 1;
        
        int l = 0, r = 0;
        if(root->left != NULL)
            l = countNodes(root->left);
        if(root->right != NULL)
            r = countNodes(root->right);
        return 1+l+r;
    }
};