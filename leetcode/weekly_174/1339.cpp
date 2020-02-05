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
    int dfs(TreeNode* root){
        int sum = root->val;
        if(root -> left){
            sum += dfs(root -> left);
        }
        if(root -> right){
            sum += dfs(root -> right);
        }
        root -> val = sum;
        return sum;
    }
    
    long long ans = 0;
    
    void dfs2(TreeNode* root, int treesum){
        ans = max(ans, (long long)(treesum-root->val)*root->val);
        if(root -> left){
            dfs2(root -> left, treesum);
        }
        if(root -> right){
            dfs2(root -> right, treesum);
        }
    }
    
    int maxProduct(TreeNode* root) {
        int MOD = 1e9+7;
        int treesum = dfs(root);
        dfs2(root, treesum);
        ans %= MOD;
        return (int)ans;
    }
};
