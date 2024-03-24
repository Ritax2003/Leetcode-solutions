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
    vector<ListNode*> lltovec(ListNode* head){
        vector<ListNode*>vec;
        while(head!=NULL){
            vec.push_back(head);
            head= head->next;
        }
        return vec;
    }
    bool isPal(vector<ListNode*>v){
        int i =0,j = v.size()-1;
        while(i<=j){
            if(v[i]->val != v[j]->val) return false;
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        vector<ListNode*>v = lltovec(temp);
        return isPal(v);
    }
};