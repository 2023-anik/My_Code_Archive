#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node{
    public:
    int val;
    Node* next;

    /****constractor****/
    // Node(int value):val(value), next(nullptr){}
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node* &head, int &x){
    Node* newNode=new Node(x);
    if(head==NULL){
        head=newNode;
        cout<<"Successfully inserted:)"<<endl<<endl;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
    // newNode->next=NULL; -->not necessary cause newNode already point to nulptr
    cout<<"Successfully inserted:)"<<endl<<endl;
}

void print_the_lists(Node* head){
    cout<<"Your list: ";
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* head=NULL;
    int cmd;
    do{
        cout<<"0: Exit"<<endl;
        cout<<"1: Enter a value to insert at tail"<<endl;
        cout<<"2: See your lists"<<endl;
        cout<<"Type any from 0 to 2: ";
        cin>>cmd;
        cout<<endl;
        switch(cmd){
            case 0:{
                cout<<"Successfully Exit:)"<<endl;
                return 0;
            }
            case 1:{
                int value;
                cout<<"Enter your value: ";
                cin>>value;
                insert_at_tail(head, value);
                cout<<endl;
                break;
            }
            case 2:{
                print_the_lists(head);
                cout<<endl<<endl;
                break;
            }
            default:
                cout<<"Invalid command. Try again!"<<endl;
        }
    }while(cmd!=0);

    return 0;
}