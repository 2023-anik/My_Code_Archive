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
void insert_at_head(Node* &head, int value){
    Node* newNode=new Node(value);
    newNode->next=head;
    head=newNode;
    cout<<"Successfully have inserted at head"<<endl<<endl;
}

//to insert at tail
void insert_at_tail(Node* &head, int value){
    Node* newNode=new Node(value);
    if(head==nullptr){
        head=newNode;
        cout<<"Successfully have inserted at head"<<endl<<endl;
        return;
    }
    Node* temp=head;
    while(temp->next not_eq nullptr)
        temp=temp->next;
    temp->next=newNode;
    cout<<"Successfully have inserted at tail"<<endl<<endl;
}

//to insert at any possition
void insert_at_any_position(Node* &head, int position, int value){
    if(position<1){
        cout<<"Invalid position"<<endl<<endl;
        return;
    }
    Node* newNode=new Node(value);
    if(position==1){
        newNode->next=head;
        head=newNode;
        cout<<"Successfully inserted at point "<<position<<endl<<endl;
        return;
    }
    Node* temp=head;
    for(int i=1; i<position-1; ++i){
        if(temp==nullptr){
            cout<<"Invalid postion"<<endl<<endl;
            return;
        }
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    cout<<"Successfully inserted at point "<<position<<endl<<endl;
}

//to delete from head
void delete_from_head(Node* &head){
    if(head==nullptr){
        cout<<"Already Empty List"<<endl<<endl;
        return;
    }
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
    cout<<"Successfully have deleted from the head"<<endl<<endl;
}

//to delete from tail
void delete_from_tail(Node* &head){
    if(head==nullptr){
        cout<<"Already empty"<<endl<<endl;
        return;
    }
    if(head->next==nullptr){
        delete head;
        head=nullptr;
        cout<<"Successfully have deleted from the tail"<<endl<<endl;
        return;
    }
    Node* temp=head;
    while(temp->next not_eq nullptr)
        temp=temp->next;
    delete temp->next;
    temp->next=nullptr;
    cout<<"Successfully have deleted from the tail"<<endl<<endl;
}

//to delete from any position
void delete_from_any_position(Node* &head, int position){
    if(position<1){
        cout<<"Invalid position"<<endl<<endl;
        return;
    }
    if(position==1){
        Node* deleteNode=head;
        head=head->next;
        delete deleteNode;
        cout<<"Successfully have delete from position "<<position<<endl<<endl;
        return;
    }
    Node* temp=head;
    for(int i=1; i<position-1; ++i){
        if(temp==nullptr){
            cout<<"Invalid position"<<endl<<endl;
            return;
        }
        temp=temp->next;
    }
    Node* deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
    cout<<"Successfully have deleted from position "<<position<<endl<<endl;    
}

//to count list size
int list_size(Node* &head){
    Node* temp=head;
    int size=0;
    while(temp not_eq nullptr){
        size++;
        temp=temp->next;
    }
    return size;
}

//to print to list
void print_the_list(Node* &head){
    cout<<"Elements of the list: ";
    Node* temp=head;
    while(temp not_eq nullptr){
        cout<<temp->val<<' ';
        temp=temp->next;
    }cout<<endl<<endl;
}
int main(){
    Node* head=NULL;
    int cmd;
    while(1){
        cout<<"[1] Insert at head"<<endl;//Error Handling Done
        cout<<"[2] Insert at tail"<<endl;//Error Handling Done
        cout<<"[3] Insert at any position"<<endl;//Error Handling Done
        cout<<"[4] Delete from head"<<endl;//Error Handling Done
        cout<<"[5] Delete from tail"<<endl;//Error Handling Done
        cout<<"[6] Delete from any position"<<endl;//Error Handling Done
        cout<<"[7] See the list size"<<endl;
        cout<<"[8] See the list"<<endl;
        cout<<"[0] Exit"<<endl;
        cout<<"Enter any from 0 to 6 ";
        cin>>cmd;
        cout<<endl;
        switch(cmd){
            case 1:{
                int x;
                cout<<"Enter value: ";
                cin>>x;
                insert_at_head(head, x);
                break;
            }
            case 2:{
                int x;
                cout<<"Enter value: ";
                cin>>x;
                insert_at_tail(head, x);
                break;
            }
            case 3:{
                int posi, x;
                cout<<"Enter position: ";cin>>posi;
                cout<<"Enter value: "; cin>>x;
                if(posi==1) insert_at_head(head, x);
                else insert_at_any_position(head, posi, x);
                break;
            }
            case 4:{
                delete_from_head(head);
                break;
            }
            case 5:{
                delete_from_tail(head);
                break;
            }
            case 6:{
                int posi;
                cout<<"Enter position: "; cin>>posi;
                delete_from_any_position(head, posi);
                break;
            }
            case 7:{
                cout<<list_size(head)<<endl<<endl;
                break;
            }
            case 8:{
                print_the_list(head);
                break;
            }
            case 0:{
                cout<<"Successfully have exited"<<endl;
                return 0;
            }
            default:cout<<"Invalid enter! Try again."<<endl<<endl;
        }
    }
    return 0;
}