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
    bool isPal(vector<int>v){
        int start = 0;
        int end = v.size()-1;
        while(start<=end){
            if(v[start]!=v[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    vector<int>lltovec(ListNode* head){
        vector<int> v;
        ListNode* dummy = head;
        while(dummy!=NULL){
            v.push_back(dummy->val);
            dummy = dummy->next;
        }
        return v;
    }
    bool isPalindrome(ListNode* head) {
        vector<int> v = lltovec(head);
        bool res = isPal(v);
        return res;
    }
};