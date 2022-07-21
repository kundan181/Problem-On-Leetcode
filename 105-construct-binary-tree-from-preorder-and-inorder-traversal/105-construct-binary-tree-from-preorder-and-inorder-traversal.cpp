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
    TreeNode* build(vector<int>& preorder, int preStart, int preEnd, vector<int>& inorder, int inStart, int inEnd, map<int, int>& inmap){
    if(inStart > inEnd || preStart > preEnd) return NULL;
    TreeNode* root = new TreeNode(preorder[preStart]);
    
    int in = inmap[root->val];
    int inLeft = in - inStart;
    
    root->left = build(preorder, preStart+1, preStart+inLeft, inorder, inStart, in-1, inmap);
    root->right = build(preorder, preStart+inLeft+1, preEnd, inorder, in+1, inEnd, inmap);
    return root;
    
    
    
    
}


TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    map<int, int> inmap;
    for(int i = 0;i<inorder.size();i++){
        inmap[inorder[i]] = i;
    }
    
    TreeNode* root = build(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, inmap);
    return root;
}
};