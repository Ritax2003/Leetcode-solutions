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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL or head->next == NULL or head->next->next==NULL) return head;
        ListNode* oddhead = head;
        ListNode* odd = oddhead;
        ListNode* evenhead = head->next;
        ListNode* even = evenhead;
        while(odd->next!=NULL and even->next!=NULL){
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=evenhead;
        return oddhead;
    }
};