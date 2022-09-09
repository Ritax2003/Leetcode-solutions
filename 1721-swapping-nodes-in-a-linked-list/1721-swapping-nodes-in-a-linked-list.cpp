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
        int s =0;
        ListNode *temp = head;
        while(temp != NULL){
            s++;
            temp = temp->next;
        }
        int ts = k;
        int bi = s-k+1;
        ListNode *temp2 = head;
        ListNode *temp1 = head;
        while(temp2!=NULL){
            if(k==1){
                break;
            }
            temp2 = temp2->next;
            k--;
        }
        while(temp1!=NULL){
            if(bi==1){
                break;
            }
            temp1 = temp1->next;
            bi--;
        }
        int t = temp1->val;
        temp1->val = temp2->val;
        temp2->val = t;
        return head;
    }
}; 
