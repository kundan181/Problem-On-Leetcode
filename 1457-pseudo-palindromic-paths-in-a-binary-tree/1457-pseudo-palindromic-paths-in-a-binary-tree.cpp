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
    vector<int> a; // This will work as map to count the nodes with same value(from 1-9)
    int ans;  // this will store our answer that we have to return 
    bool checkPalin(){
        // Here in we will traverse in our map and check for the number of values
        // that have odd count .
        // If count is greater than 1 then we can't form a palindromen else we can
        // Ex 1: [1,3,3]
        //  a[1]=1  ,  a[3]=2
        // So we can form a palindrome like [3,1,3]
        // Ex 2 : [1,3,1,3,2,4]
        // a[1]=2 , a[2]=1 , a[3]=2 , a[4]=1
        // As 2,4 have odd count so we can't form any palindrome 
        int cnt=0;
        for(int i=1;i<10;i++){ 
            if(a[i]&1){
                cnt++;
            }
        }
        if(cnt>1) return false;
        else return true;
    }
    void solve(TreeNode *root){
        // we will use dfs traversal
        if(root==NULL) return;
        // If both child are NULL that means it is leaf node , so just check the path 
        if(root->left==NULL && root->right==NULL){
            // adding this root into path
            a[root->val]++;
            // will check for palindrome here 
            if(checkPalin()) ans++;
            // removing this node from path 
            a[root->val]--;
            
            return ;
        }
        // adding this root into path
        a[root->val]++;
        // Going to explore the left path 
        solve(root->left);
        // Going to explore the right path 
        solve(root->right);
        // removing this node from path 
        a[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
         ans=0;
         a.resize(10,0);
         solve(root);
         return ans;
    }
};