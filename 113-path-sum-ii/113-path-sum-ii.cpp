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
    vector<vector<int>>ans;
    vector<int>ds;
    vector<vector<int>> pathSum(TreeNode* root, int ts) {
        check(root,ts,0);
        return ans;
    }
    void check(TreeNode*root,int sum,int curr){
        if(root==NULL) return;
        ds.push_back(root->val);
        curr+=root->val;
        if(curr==sum && root->left==NULL && root->right==NULL){
            ans.push_back(ds);
        }
        check(root->left,sum,curr);
        check(root->right,sum,curr);
        ds.pop_back();
    }
};