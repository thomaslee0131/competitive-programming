/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    bool ans;
    void dfs1(TreeNode* root, vector<int>& list, vector<int> path){
        if(!root) return;
        path.push_back(root->val);
        int len = 0;
        while(path.size() > len && list.size() > len){
            if(path[path.size()-len-1] == list[list.size()-len-1]){
                len++;
            }
            else break;
        }
        if(len == list.size()){
            ans = 1;
        }
        dfs1(root->left, list, path);
        dfs1(root->right, list, path);
        
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        vector<int> list;
        while(head){
            list.push_back(head->val);
            head = head->next;
        }
        dfs1(root, list, {});
        return ans;
    }
};
