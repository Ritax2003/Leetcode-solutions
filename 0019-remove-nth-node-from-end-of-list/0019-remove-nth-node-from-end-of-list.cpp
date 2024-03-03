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
    int length(ListNode *head){
        int len = 0;
        ListNode* temp = head;
        while(temp->next!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode *curr = head;
       int traverseTill = length(head) - n ;
        int i = 0;

        // If the head needs to be removed
        if (traverseTill == -1) {
            head = head->next;
            delete curr;
            return head;
        }

        // Traverse to the node before the one to be removed
        while (i < traverseTill) {
            curr = curr->next;
            i++;
        }

        // Remove the nth node from the end
        ListNode* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;

        return head;
    }
};