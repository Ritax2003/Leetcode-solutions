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
    vector<int>lltovec(ListNode* head){
        ListNode* temp = head;
        vector<int>vec;
        while(temp!=NULL){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        return vec;
    }
    bool isPal(vector<int> v){
        int start = 0, end = v.size()-1;
        while(start<end){
            if(v[start]!=v[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        vector<int> v = lltovec(head);
        return isPal(v);
    }
};