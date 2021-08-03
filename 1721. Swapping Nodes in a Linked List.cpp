/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        
        
        ListNode* last = head;
        ListNode* fast = head;
        ListNode* first = head;
        
        int i=k-1;
        
        while(i>0){
            fast = fast->next;
            first = first->next;
            i--;
        }
        
        while(fast->next!= NULL){
            fast = fast->next;
            last = last->next;
        }
        
        swap(last->val,first->val);
        return head;
        
        
    }
};
