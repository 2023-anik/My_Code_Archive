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

//insert at head
void insert_at_head(Node* &head, Node* &tail, int value){
    Node* newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

//insert at tail
void insert_at_tail(Node* &head, Node* &tail, int value){
    Node* newNode=new Node(value);
    if(tail==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}

//insert at any position
void insert_at_any_position(Node* head, int index, int value){
    Node* newNode=new Node(value);
    Node* tmp=head;
    for(int i=1; i<index-1; ++i)
        tmp=tmp->next;
    newNode->next=tmp->next;
    tmp->next->prev=newNode;
    tmp->next=newNode;
    newNode->prev=tmp;
}

//Delete from head
void delete_from_head(Node* &head, Node* &tail){
    if(head==NULL){
        cout<<"Already Empty"<<endl<<endl;
        return;
    }
    Node* deleteNode=head;
    if(head->next!=NULL){
        head=head->next;
        head->prev=NULL;
    }else{
        head=NULL;
        tail=NULL;
    }
    delete deleteNode;
}

//Delete from tail
void delete_from_tail(Node* &head, Node* &tail){
    if(tail==NULL){
        cout<<"Already Empty"<<endl<<endl;
        return;
    }
    Node* deleteNode=tail;
    if(tail->prev!=NULL){
        tail=tail->prev;
        tail->next=NULL;
    }else{
        tail=NULL;
        head=NULL;
    }
    delete deleteNode;
}

//Delete from any position
void delete_from_any_position(Node* head, int position){
    Node* tmp=head;
    for(int i=1; i<position-1; ++i)
        tmp=tmp->next;
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deleteNode;
}

//See the list
void normal_print(Node* head){
    if(head==NULL){
        cout<<"Empty list"<<endl<<endl;
        return;
    }
    cout<<"Elements of list: ";
    while(head!=NULL){
        cout<<head->val<<' ';
        head=head->next;
    }cout<<endl<<endl;
}

//See the list reversely
void reverse_print(Node* tail){
    if(tail==NULL){
        cout<<"Empty list"<<endl<<endl;
        return;
    }
    cout<<"Elements of list(reversely): ";
    while(tail!=NULL){
        cout<<tail->val<<' ';
        tail=tail->prev;
    }cout<<endl<<endl;
}

//list size
int size_list(Node* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }return cnt;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int cmd;
    do{
        cout<<"[1] Insert at head"<<endl;
        cout<<"[2] Insert at tail"<<endl;
        cout<<"[3] Insert at anyposition"<<endl;
        cout<<"[4] Delete from head"<<endl;
        cout<<"[5] Delete from tail"<<endl;
        cout<<"[6] Delete from any position"<<endl;
        cout<<"[7] See the list"<<endl;
        cout<<"[8] See the list in reversely"<<endl;
        cout<<"[0] Exit"<<endl;
        cout<<endl;
        cout<<"Type any from 0 to 8: ";
        cin>>cmd;
        switch(cmd){
            case 1:{
                int val;
                cout<<"Enter value: ";
                cin>>val;
                insert_at_head(head, tail, val);
                break;
            }
            case 2:{
                int val;
                cout<<"Enter value: ";
                cin>>val;
                insert_at_tail(head, tail, val);
                break;
            }
            case 3:{
                int posi, val;
                cout<<"Enter position and value: ";
                cin>>posi>>val;
                if(posi==1) insert_at_head(head, tail, val);
                else if(posi>size_list(head))cout<<"Invalid Position"<<endl<<endl;
                else insert_at_any_position(head, posi, val);
                break;
            }
            case 4:{
                delete_from_head(head, tail);
                break;
            }
            case 5:{
                delete_from_tail(head, tail);
                break;
            }
            case 6:{
                int posi;
                cout<<"Enter posi: ";
                cin>>posi;
                if(posi>size_list(head))cout<<"Invalied Position"<<endl<<endl;
                else if(posi==1)delete_from_head(head, tail);
                else if(posi==size_list(head)) delete_from_tail(head, tail);
                else delete_from_any_position(head, posi);
                break;
            }
            case 7:{
                normal_print(head);
                break;
            }
            case 8:{
                reverse_print(tail);
                break;
            }
            case 0:{
                cout<<"Successfully exited"<<endl;
                return 0;
            }
            default: cout<<"Invalid Input. Try again"<<endl<<endl;
        }
    }while(1);
    return 0;
}