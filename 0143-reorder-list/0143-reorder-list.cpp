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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next == NULL) return;
        vector<ListNode*> v;
        ListNode* temp = head;
        while(temp!=NULL){
            v.push_back(temp);
            temp = temp->next;
        }
        int i =0,j=v.size()-1;
        while(i<j){
            v[i]->next = v[j];
            i++;
            if(i==j) break;
            v[j]->next = v[i];
            j--;
        }
        v[i]->next=NULL;
    }
};