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
    vector<int> nextLargerNodes(ListNode* head) {
        
        //Reverse the linked list
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* fast;
        int c = 0;
        
        while(curr!=NULL){
            fast = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fast;
            c++;
        }
        
        head = prev;
        
        
        //Using Stacks
        stack<int> st;
        
        ListNode* temp = head;
        int Curr = temp->val;
        st.push(Curr);
        
        temp = temp->next;
        
        vector<int> ans(c);
        int i = c-1;
        ans[i--] = 0;
        
        
        
        while(temp!=NULL){
            
            Curr = temp->val;
            while(!st.empty() && st.top() <= Curr){
                st.pop();
            }
            
            if(st.empty()){
                ans[i--] = 0;
            }
            else{
                ans[i--] = st.top();
            }
            st.push(Curr);
            temp = temp->next;
            
        }
        return ans;
        
    }
};
