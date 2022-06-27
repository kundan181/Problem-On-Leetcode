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
    bool isSymmetric(TreeNode* root)
    {
        bool res = true;
        traverse(root->left,root->right,&res);
        return res;
    }
    
    void traverse(TreeNode* roota, TreeNode* rootb, bool * res)
    {
        if(*res == false)
        {
            return;
        }
        else if(roota == nullptr && rootb == nullptr)
        {
            return;
        }
        else if(roota == nullptr || rootb == nullptr)
        {
            *res = false;
            return;
        }
        else if(roota->val != rootb->val)
        {
            *res = false;
            return;
        }
        else
        {
            traverse(roota->left, rootb->right, res);
            traverse(roota->right, rootb->left, res);
            return;
        }
        
    }
};