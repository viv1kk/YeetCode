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
    void f(TreeNode* root, map<int, int>&mp, int &ans){
        if(!root) return;
        mp[root->val]++;
        if(root->left == nullptr && root->right == nullptr){
            int odd = 0;
            int tot = 0;
            for(auto[i, j] : mp){
                // cout<< i <<", "<<j<<endl;
                if(j%2 == 1) odd++;
                // if(odd > 1) return;
                tot+=j;
            }
            if((tot%2== 0 && odd == 0) || (tot%2 == 1 && odd == 1)){
                // cout<<root->val<<"& "<< tot<<", "<<odd<< endl;
                ans++;
            }
            mp[root->val]--;
            return;
        }
              
        f(root->left,mp,  ans);
        f(root->right, mp, ans);   

        mp[root->val]--;
        if(mp[root->val] == 0) 
            mp.erase(root->val);
    
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        int ans = 0;
        map<int,int>mp;
        f(root, mp, ans);
        return ans;
    }
};