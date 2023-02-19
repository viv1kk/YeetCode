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

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root) return ans;
        vector<int> t;
        queue<TreeNode*> q;
        q.push(root);
        
        bool x = false;
        
        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0; i < n; i++)
            {
                TreeNode* root = q.front();
                q.pop();
                t.push_back(root->val);
                
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            if(x) reverse(t.begin(), t.end());
            ans.push_back(t);
            t.clear();
            x = !x;
        }
        return ans;
    }
};