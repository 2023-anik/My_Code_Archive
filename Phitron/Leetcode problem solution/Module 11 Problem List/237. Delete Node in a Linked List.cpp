/*
https://leetcode.com/problems/delete-node-in-a-linked-list/description/
*/

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* tmp=node->next;
        // node->val=node->next->val;
        // node->next=node->next->next;
        node->val=tmp->val;
        node->next=tmp->next;
        delete tmp;
        
    }
};