/*
https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/
*/
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

//solution****
class Solution {
public:
    int size_list(ListNode* head){
        int cnt=0;
        while(head!=nullptr){
            cnt++;
            head=head->next;
        }return cnt;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==nullptr)return head;
        int m=k;
        m--;//converted index to to 0-based
        auto dummy1=head;
        for(int i=1; i<=m; ++i) dummy1=dummy1->next;
        int n=size_list(head)-k;//already 0-based
        auto dummy2=head;
        for(int i=1; i<=n; ++i) dummy2=dummy2->next;
        int temp=dummy1->val;
        dummy1->val=dummy2->val;
        dummy2->val=temp;
        return head;
    }
};