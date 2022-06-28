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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL)
            return false; 
        stack<pair<TreeNode*, int>> stk ; 
        stk.push({root,0});
        while(!stk.empty()){
            auto node = stk.top(); 
            int rs = node.second; TreeNode* curr = node.first; 
            stk.pop(); 
            if(curr->left == NULL && curr->right == NULL){
                if(rs + curr->val == targetSum)
                    return true;
            }
            
            if(curr->left != NULL)
                stk.push({curr->left, rs + curr->val});
            if(curr->right != NULL)
                stk.push({curr->right, rs + curr->val});
        }
        return false; 
    }
};