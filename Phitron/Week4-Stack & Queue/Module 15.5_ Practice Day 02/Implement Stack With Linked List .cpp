// https://www.naukri.com/code360/problems/implement-stack-with-linked-list_630475?leftPanelTabValue=PROBLEM

/*
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };


****************************************************************/

/*
class Stack
{

public:
    Node* head=NULL;
    Node* tail=NULL;

    int size=0;

    int getSize()
    {
        //Write your code here
        return size;
    }

    bool isEmpty()
    {
        //Write your code here
        return size==0;
    }

    void push(int data)
    {
        //Write your code here
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

    void pop() {
        if (isEmpty()) return;
        size--;
        if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    }

    int getTop()
    {
        //Write your code here
        if(isEmpty())return -1;
        return tail->data;
    }
};
*/
