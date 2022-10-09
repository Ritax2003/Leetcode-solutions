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
     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
       
        while(temp1!=NULL && temp2!=NULL){
            temp1 = temp1->next;
            temp2 = temp2-> next;
        }
        
        ListNode *cur1 = headA;
        ListNode *cur2 = headB;
           
        while(temp1){
            temp1= temp1->next;
            cur1 = cur1-> next;
        }
        
        while(temp2){
            temp2 = temp2->next;
            cur2 = cur2-> next;
        }
        
        while(cur1 && cur2){
            if(cur1==cur2)return cur1;
            
            cur1= cur1->next;
            cur2= cur2->next;
        }
        return NULL;
    }
};