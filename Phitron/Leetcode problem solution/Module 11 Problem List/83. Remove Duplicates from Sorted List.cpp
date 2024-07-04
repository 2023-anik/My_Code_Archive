/*
https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)return head;
        auto* crnt=head;
        while(crnt->next!=nullptr){
            auto nxt=crnt->next;
            if(crnt->val==nxt->val){
                crnt->next=nxt->next;
                delete nxt;
            }
            else crnt=crnt->next;
        }return head;
    }
};