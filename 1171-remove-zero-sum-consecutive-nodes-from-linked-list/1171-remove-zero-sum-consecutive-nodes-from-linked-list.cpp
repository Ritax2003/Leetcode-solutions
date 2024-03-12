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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* ref = new ListNode(0);
        ref -> next  = head;
        ListNode* start = ref;
        while(start != NULL) {
            int prefixSum = 0;
            ListNode *end = start -> next;
            while(end != NULL) {
                prefixSum += end -> val;
                if(prefixSum == 0) {
                    start -> next = end-> next;
                }
                end = end -> next;
            }
            start = start -> next;
        }
        return ref -> next;
    }
};