/*
https://leetcode.com/problems/merge-nodes-in-between-zeros/description/
*/

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 //Solution****
 class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        auto tmp=head->next;
        auto modify=tmp;
        while(tmp!=nullptr && tmp->next!=nullptr){
            int sum=0;
            while(tmp->val!=0){
                sum+=tmp->val;
                tmp=tmp->next;
            }
            tmp=tmp->next;
            modify->val=sum;
            modify->next=tmp;
            modify=modify->next;
        }
        return head->next;
    }
};