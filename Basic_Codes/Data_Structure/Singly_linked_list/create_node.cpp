#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

// class Node{
//     public:
//     int val;
//     Node* next;
// };

//using a constructor
class Node{
    public:
    int val;
    Node* next;

    /****constructor****/
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
    /*******************/
};

int main(){
    // Node a, b;//-->static nodes - a and b
    // a.val=10;
    // b.val=20;
    // a.next=&b;
    // b.next=NULL;
    // cout<<a.val<<endl;
    // cout<<a.next->val<<endl;
    // cout<<(*a.next).val<<endl;

    //Using constructor
    Node a(10), b(20); //--> static nodes - a and b are objects of the Node constructor
    a.next=&b;
    b.next=NULL;
    cout<<a.val<<endl;
    cout<<(*a.next).val<<endl;
    cout<<a.next->val<<endl;
    //cout<<a->next->val<<endl; --->logically doesn't make sense
    return 0;
}