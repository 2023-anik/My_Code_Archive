#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node{
    public:
    int val;
    Node* next;

    /****constractor****/
    Node(int &value):val(value), next(nullptr){}
};

//to insert at head
void insert_at_head(Node* &head, int &value){
    Node* newNode=new Node(value);
    newNode->next=head;
    head=newNode;
    cout<<"Successfully have exited"<<endl<<endl;
}

//to insert at tail
void insert_at_tail(Node* &head, int &value){
    Node* newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        cout<<"successfully have exited"<<endl<<endl;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
    cout<<"successfully have exited"<<endl<<endl;
}

//to print the whole list
void print_list(Node* &head){
    cout<<"Your list: ";
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<' ';
        temp=temp->next;
    }
}

int main(){
    Node* head=NULL;
    int cmd;
    do{
        cout<<"0. Exit"<<endl;
        cout<<"1. Insert at head"<<endl;
        cout<<"2. Insert at tail"<<endl;
        cout<<"3. See your list"<<endl;
        cout<<"Type any from 0 to 3: ";
        cin>>cmd;
        cout<<endl;
        switch(cmd){
            case 0:{
                cout<<"successfully have exited"<<endl;
                return 0;
            }
            case 1:{
                int value;
                cout<<"Enter value: ";
                cin>>value;
                insert_at_head(head, value);
                break;
            }
            case 2:{
                int value;
                cout<<"Enter value: ";
                cin>>value;
                insert_at_tail(head, value);
                break;
            }
            case 3:{
                print_list(head);
                cout<<endl<<endl;
                break;
            }
            default:cout<<"Invalid input! Tye again!"<<endl<<endl;
        }

    }while(1);
    return 0;
}