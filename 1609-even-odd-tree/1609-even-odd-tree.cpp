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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        
        if(root->val%2 == 0) return false;
        int n = 1;
        while(!q.empty()){
            int prev = q.front()->val%2? INT_MAX: -1;
            for(int i = 0; i < n; i++){
                TreeNode* curr = q.front();
                if(curr->val%2){
                    if(curr->left){
                        if(prev > curr->left->val && curr->val%2 != curr->left->val%2) prev = curr->left->val;
                        else return false;
                    }
                    if(curr->right){
                        if(prev > curr->right->val && curr->val%2 != curr->right->val%2) prev = curr->right->val;
                        else return false;
                    }
                }
                else{
                    if(curr->left){
                        if(prev < curr->left->val && curr->val%2 != curr->left->val%2) prev = curr->left->val;
                        else return false;
                    }
                    if(curr->right){
                        if(prev < curr->right->val && curr->val%2 != curr->right->val%2) prev = curr->right->val;
                        else return false;
                    }
                }
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                q.pop();
            }
                
            n = q.size();
        }
        return true;
    }
};