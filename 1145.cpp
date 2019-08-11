/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int ans;
    int dfs(TreeNode* root, int n, int x){
        if(root==NULL)return 0;
        int leftsize=dfs(root->left, n, x);
        int rightsize=dfs(root->right, n, x);
        int treesize=leftsize+rightsize+1;
        if(root->val==x){
            ans=max({rightsize,leftsize,n-treesize});
        }
        return treesize;
    }
    
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        ans=0;
        dfs(root, n, x);
        return ans>n-ans;
    }
};
