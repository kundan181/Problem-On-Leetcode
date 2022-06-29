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
    TreeNode* searchBST(TreeNode* root, int val) {

        TreeNode* curr = root;
        while (nullptr != curr){
            if (curr->val == val){
                return curr;
            }
            if (val < curr->val){ // Go left.
                curr = curr->left;
            }
            else{ // Go right.
                curr = curr->right;
            }
        }
        return {};
    }
};