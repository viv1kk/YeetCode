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
    
    vector<TreeNode*>ans;
    unordered_map<string, int>mp;

    string f(TreeNode* root)
    {
        if(!root) return "$";
        string l = f(root->left);
        string r = f(root->right);
        string s = to_string(root->val)+"$"+l+"$"+r;
        
        if(mp[s] == 1)
            ans.push_back(root);
        mp[s]++;
        return s;        
    }
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        f(root);
        return ans;
    }
};