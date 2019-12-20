/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* now = head;
        if(!now) return 0;
        vector<int> v;
        v.push_back(now->val);
        while(now->next){
            now = now->next;
            v.push_back(now->val);
        }
        int ans = 0;
        for(int i = v.size()-1; i>=0; i--){
            if(v[i])
                ans += (1<<(v.size()-1-i));
        }
        return ans;
    }
};
