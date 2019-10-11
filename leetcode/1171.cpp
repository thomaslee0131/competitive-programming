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
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int> a;
        ListNode* ptr = head;
        while (ptr!=NULL){
            a.push_back(ptr->val);
            ptr = ptr->next;
        }
        
        for(int i=0;i<a.size();i++){
            int n=0;
            for(int j=i;j>=0;j--){
                n+=a[j];
                if(!n){
                    for(int k=j;k<=i;k++){
                        a[k]=0;
                    }
                    break;
                }
            }
        }
        vector<int>a2;
        for(int i=0;i<a.size();i++){
            if(a[i]){
                a2.push_back(a[i]);
            }
        }
        
        ListNode* result = nullptr;
        while (a2.size()){
            ListNode* tmp = new ListNode(a2.back());
            a2.pop_back();
            tmp->next = result;
            result = tmp;
        }
        return result;
    }
};
