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
    void helper(TreeNode* root,int level,int *max_level,vector<int>& ans){
        if(!root){
            return;
        }
        if(level > *max_level){
            ans.push_back(root->val);
            *max_level = level;
        }
        helper(root->right,level + 1,max_level,ans);
        helper(root->left,level + 1,max_level,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int max_level = 0;
        helper(root,1,&max_level,ans);
        return ans;
    }
};