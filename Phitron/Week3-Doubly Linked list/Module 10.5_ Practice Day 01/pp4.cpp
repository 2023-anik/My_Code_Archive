/*
You have a doubly linked list which is empty initially. You need to take a value Q which refers to queries. For each query you will be given X and V. You will insert the value V to the Xth index of the doubly linked list and print the list in both left to right and right to left. If the index is invalid then print “Invalid”.
*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

int size_list(Node* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}

void insertAt(Node* &head, Node* &tail, int index, int value){
    Node* newNode = new Node(value);
    if(index == 0){
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }else{
        Node* temp = head;
        for(int i = 0; i < index - 1 && temp != NULL; i++)
            temp = temp->next;
        if(temp == NULL){
            cout << "Invalid" << endl;
            // delete newNode;
            return;
        }
        newNode->next = temp->next;
        if(temp->next != NULL) temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
        if(newNode->next == NULL) tail = newNode;
    }
}

void print(Node* head){
    if(head==NULL)return;
    cout<<head->val<<' ';
    print(head->next);
}

void reverse_print(Node* tail){
    if(tail==NULL)return;
    cout<<tail->val<<' ';
    reverse_print(tail->prev);
}


int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int q; cin>>q;
    while(q--){
        int x, v;
        cin>>x>>v;
        if(x>size_list(head)){
            cout<<"Invalid"<<endl;
        }
        else{
            insertAt(head, tail, x, v);
            print(head);
            cout<<endl;
            reverse_print(tail);
            cout<<endl;
        }
    }
    return 0;
}