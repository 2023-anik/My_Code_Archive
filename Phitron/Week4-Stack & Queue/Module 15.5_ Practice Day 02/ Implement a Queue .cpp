// https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTabValue=PROBLEM

/*
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class Queue {
public:

    Node* head=NULL;
    Node* tail=NULL;

    int size=0;

    bool isEmpty() {
        // Implement the isEmpty() function
        return size==0;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        size++;
        Node* newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty())return -1;
        size--;
        int frontData=head->data;
        if(head==tail){
            delete head;
            head=NULL;
            tail=NULL;
        }else{
            Node* temp=head;
            head=head->next;
            delete temp;
        }
        return frontData;
    }

    int front() {
        // Implement the front() function
        if(isEmpty())return -1;
        return head->data;
    }
};
*/