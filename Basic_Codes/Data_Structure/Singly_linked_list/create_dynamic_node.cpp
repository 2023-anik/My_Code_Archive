#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node{
    public:
    int val;
    Node* next;

    /****constractor****/
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
    /*******************/
};

int main(){
    //Dynamic node creat
    //Always fist nose must be head node
    Node* head = new Node(10);
    //Node* head: Declares a pointer named head of type Node*
    //new Node(10): Dynamically allocates memory for a new Node object, initializing it with the value 10
    Node* a = new Node(20);
    head->next = a;

    cout<<(*head).val<<endl;// -->10
    cout<<head->val<<endl;//-->10 (We mostly use)

    cout<<a->val<<endl;//-->20

    cout<<(*(*head).next).val<<endl;//-->20
    cout<<head->next->val<<endl;//-->20 (We mostly use)
    
    return 0;
}