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
    
    ListNode * reverse(ListNode* head){
        
        ListNode* prev = NULL,*curr=head,*next=NULL;
        
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
        
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(left == right){
            return head;
        }
        
        ListNode* curr = head;
        ListNode* prev_start = NULL, *start = NULL, *end = NULL, *end_next=NULL;
        
        int i=1;
        
        while(i <= right && curr){
            
            if(i == left - 1){
                prev_start = curr;
            }
            
            if(i == left){
                start = curr;
            }
            
            if(i == right){
                end = curr;
                end_next = curr->next;
            }
            
            curr = curr->next;
            i++;
        }
        
        end->next = NULL;
        
        
        end = reverse(start);
        
        if(prev_start == NULL){
            head = end;
        }
        else{
            prev_start->next = end;
        }
        
        start->next = end_next;
        return head;
    }
};
