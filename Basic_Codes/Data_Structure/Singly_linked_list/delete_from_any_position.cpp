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

//to insert at tail
void Insert_at_tail(Node* &head, int &value){
    Node* newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        cout<<"Successfully inserted at head"<<endl<<endl;
        return;
    }
    Node* temp=head;
    while(temp->next not_eq NULL)
        temp=temp->next;
    temp->next=newNode;
    cout<<"Successfully inserted"<<endl<<endl;
}

//to delete from any possition
void Delete_form_any_position(Node* &head, int &posi){
    if(equal_to<int>()(posi, 1)){    //********************************
        Node* deleteHead=head;       //Delete from possition 1 means, *
        head=head->next;             //Delete from head.              *
        delete deleteHead;           //********************************
        cout<<"Successfully have deleted from "<<posi<<endl<<endl;
        return;
    }
    Node* temp=head;
    for(int i=1; i<posi-1 and temp->next not_eq nullptr; ++i)
        temp=temp->next;
    Node* deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
    cout<<"Successfully have deleted form "<<posi<<endl<<endl;
}

// 40 50 60 70
// 1  2  3  4-->possition
// Delete possition: 3
// Output: 40 50 70

//to print the list
void print_the_list(Node* &head){
    if(head==NULL){
        cout<<"List is empty"<<endl<<endl;
        return;
    }
    cout<<"Your list: ";
    Node* temp=head;
    while(temp not_eq NULL){
        cout<<temp->val<<' ';
        temp=temp->next;
    }
    cout<<endl<<endl;
}

int main(){
    Node* head=NULL;
    int cmd;
    do{
        cout<<"[0] Exit"<<endl;
        cout<<"[1] Insert at tail"<<endl;
        cout<<"[2] Delete from any position"<<endl;
        cout<<"[3] See the list"<<endl;
        cout<<"Type any from 0 to 3: ";
        cin>>cmd;
        cout<<endl;
        switch(cmd){
            case 0:{
                cout<<"Successfully have exited"<<endl;
                return 0;
            }
            case 1:{
                int value;
                cout<<"Enter the value: ";
                cin>>value;
                Insert_at_tail(head, value);
                break;
            }
            case 2:{
                int posi;
                cout<<"Enter the position: ";
                cin>>posi;
                Delete_form_any_position(head, posi);
                break;
            }
            case 3:{
                print_the_list(head);
                break;
            }
            default: cout<<"Invalid input! Try again"<<endl<<endl;
        }
    }while(1);
    return 0;
}