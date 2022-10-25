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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if (root == NULL) return ans;
        
        getpath(root, ans, "");
        return ans;
    }
    
    void getpath(TreeNode* root, vector<string>&ans, string curr)
    {
        curr += to_string(root->val);
        if(root->left == NULL && root->right == NULL)
        {
            ans.push_back(curr);
            return;
        }
        curr += "->";
        if(root->left !=NULL) getpath(root->left, ans, curr);
        if(root->right !=NULL) getpath(root->right, ans, curr);
    }
    
};