#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node{
    public:
    int val;
    Node* next;

    /****constractor****/
    //Node(int value):value(val), next(nullptr){}
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

//for inserting at anyposition
void insert_at_anyposition(Node* &head, int &value, int &posi){
    Node* newNode=new Node(value);
    Node* temp=head;
    for(int i=1; i<posi-1; ++i)
        temp=temp->next;
    newNode->next=temp->next;
    temp->next=newNode;
    cout<<"Successfully inserted"<<endl<<endl;
}

//input:
// 40 50 60 70
// 1  2  3  4-->position
// value: 200
// inserting positon: 2
//output:
// 40 200 50 60 70

//for inserting at the last position
void insert_at_tail(Node* &head, int &value){
    Node* newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        cout<<endl;
        cout<<"Successfully inserted"<<endl<<endl;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
    cout<<"Successfully inserted"<<endl<<endl;
}

//for printing the whole list
void print_the_lists(Node* head){
    cout<<"Your lists: ";
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
        cout<<"0: Exit"<<endl;
        cout<<"1: Enter a value to insert at tail"<<endl;
        cout<<"2: Enter a value to insert anyposition"<<endl;
        cout<<"3: See your lists"<<endl;
        cout<<"Type any from 0 to 3: ";
        cin>>cmd;
        cout<<endl;
        switch(cmd){
            case 0:{
                cout<<"Successfully exit"<<endl;
                return 0;
            }
            case 1:{
                cout<<"Enter value: ";
                int v; cin>>v;
                insert_at_tail(head, v);
                cout<<endl;
                break;
            }
            case 2:{
                cout<<"Enter value: ";
                int v; cin>>v;
                cout<<"Enter the position: ";
                int posi; cin>>posi;
                insert_at_anyposition(head, v, posi);
                break;
            }
            case 3:{
                print_the_lists(head);
                cout<<endl<<endl;
                break;
            }
            default: cout<<"Invalid command. Try again!"<<endl;
        }
    }while(1);
    return 0;
}