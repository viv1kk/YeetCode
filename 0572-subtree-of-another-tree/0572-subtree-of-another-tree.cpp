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
    bool f(TreeNode* r, TreeNode* s){
        if(!r && !s) return true;
        if(!r || !s) return false;
        return (r->val == s->val)&&f(r->left, s->left)&&f(r->right, s->right);
    }
    
    bool isSubtree(TreeNode* r, TreeNode* s) {
        if(!r) return false;
        return f(r, s)||isSubtree(r->left, s) || isSubtree(r->right, s);
    }
};