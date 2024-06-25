/*Take a singly linked list as input and check if the linked list
contains any duplicate value. You can assume that the maximum
value will be 100.
*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node* &head, int value){
    Node* newNode=new Node(value);
    if(head==nullptr){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next not_eq nullptr)
        temp=temp->next;
    temp->next=newNode;
}

int main(){
    Node* head=nullptr;
    int value;
    while(cin>>value){
        if(value == -1) break;
        insert_at_tail(head, value);
    }
    // map<int,int>m;
    // Node* temp=head;
    // while(temp not_eq nullptr){
    //     m[temp->val]++;
    //     temp=temp->next;
    // }
    // for(auto &x:m)
    //     if(x.second>=2){
    //         yes;
    //         return 0;
    //     }
    // no;
    // for(auto &x:m)cout<<x.first<<' '<<x.second<<endl;
    vector<int>cnt_arr(100);
    Node* temp=head;
    while(temp not_eq nullptr){
        cnt_arr[temp->val]++;
        temp=temp->next;
    }
    for(int i=0; i<100; ++i)
        if(cnt_arr[i]>1){
            yes;
            return 0;
        }
    no;
    return 0;
}