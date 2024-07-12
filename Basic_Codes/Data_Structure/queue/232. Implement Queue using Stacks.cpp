/*
https://leetcode.com/problems/implement-queue-using-stacks/description/
*/

#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    // void reverseStack(stack<int>& s2) {
    // stack<int> tempStack;
    // while (!s2.empty()) {
    //     tempStack.push(s2.top());
    //     s2.pop();
    // }
    // s2 = tempStack;
    // }
    stack<int>s;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        int first;
        stack<int>s2;
        while(!s.empty()){
            int k=s.top();
            s.pop();
            if(s.empty()){
                first=k;
                break;
            }
            s2.push(k);
        }
        // reverseStack(s2);
        // s=s2;
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
        return first;
    }
    
    int peek() {
        int first;
        stack<int>s2;
        while(!s.empty()){
            int k=s.top();
            s.pop();
            if(s.empty()){
                first=k;
                // break;
            }
            s2.push(k);
        }
        // reverseStack(s2);
        // s=s2;
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
        return first;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */