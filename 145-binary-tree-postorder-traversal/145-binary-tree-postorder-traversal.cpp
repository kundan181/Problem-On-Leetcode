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
/*
This solution is very simple and uses recursion.
Here's explanation:

First created a vector to store the traversed values.
Now coming to the algorithm part:
a. It traverses as: left(recursion) -> right(recursion) -> root(push_back)
b. When root key/val is NULL, it exits that recursion.
After all recursion completed and reached root val/key as NULL, it will return the traversed vector as res.
Time Complexity: O(n)
Auxiliary Space: O(n)

*/
class Solution {
public:
    vector<int> res;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root != NULL)
        {
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            res.push_back(root->val);
        }
        return res;
    }
};