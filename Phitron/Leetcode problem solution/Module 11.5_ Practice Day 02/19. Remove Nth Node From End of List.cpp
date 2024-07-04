/*
https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
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
    int size_list(ListNode* head){
        int cnt=0;
        while(head!=nullptr){
            cnt++;
            head=head->next;
        }return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        //optimal solution
        // ListNode *fast = head, *slow = head;
        // for (int i = 0; i < n; i++) fast = fast->next;
        // if (!fast) return head->next;
        // while (fast->next) fast = fast->next, slow = slow->next;
        // slow->next = slow->next->next;
        // return head;

        //My code
        auto tmp=head;
        int lst_size=size_list(head);
        int from_head=lst_size-n;
        if(from_head==0){
            if(head==nullptr)return head;
            return head->next;
        }
        for(int i=1; i<from_head; ++i)
            tmp=tmp->next;
        auto deleteNode=tmp->next;
        tmp->next=tmp->next->next;
        return head;
    }
};