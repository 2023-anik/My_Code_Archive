/*
https://leetcode.com/problems/palindrome-linked-list/description/
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
    void insert(ListNode* &head, ListNode* &tail, int value){
        ListNode* newNode=new ListNode(value);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }
    ListNode* reverse(ListNode* head){
        if(head==nullptr || head->next==nullptr)return head;
        ListNode* newHead=reverse(head->next);
        head->next->next=head;
        head->next=nullptr;
        return newHead;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* head2=nullptr;
        ListNode* tail2=nullptr;
        ListNode* crnt=head;
        while(crnt!=nullptr){
            insert(head2, tail2, crnt->val);
            crnt=crnt->next;
        }
        head2=reverse(head2);
        while(head!=nullptr){
            if(head->val!=head2->val) return false;
            head=head->next;
            head2=head2->next;
        }
        return true;
    }
};