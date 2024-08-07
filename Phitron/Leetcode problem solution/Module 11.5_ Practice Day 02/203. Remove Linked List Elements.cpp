/*
https://leetcode.com/problems/remove-linked-list-elements/description/
*/
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

//solution***
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr && head->val==val)
            head=head->next;
        auto tmp=head;
        while(tmp!=nullptr && tmp->next!=nullptr){
            if(tmp->next->val==val)
                tmp->next=tmp->next->next;
            else tmp=tmp->next;
        }
        return head;
    }
};