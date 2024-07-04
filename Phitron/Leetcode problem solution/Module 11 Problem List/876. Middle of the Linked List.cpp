/*
https://leetcode.com/problems/middle-of-the-linked-list/description/
*/
//appraoch 1
// class Solution {
// public:
//     int size_list(ListNode* head){
//         int cnt=0;
//         while(head!=nullptr){
//             cnt++;
//             head=head->next;
//         }return cnt;
//     }
//     ListNode* middleNode(ListNode* head) {
//         if(head==nullptr)return head;
//         int sz=size_list(head);
//         for(int i=1; i<=sz/2; ++i)
//             head=head->next;
//         return head;
//     }
// };

//approach 2(Hare and Tortoise algo)
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
