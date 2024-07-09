#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class myQueue{
    public:
    list<int>l;
    void push(int value){
        l.push_back(value);
    }
    void pop(){
        l.pop_front();
    }
    int front(){
        return l.front();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.size()==0;
    }
};

int main(){
    myQueue q;
    int n; cin>>n;
    cout<<"The size of the queue: "<<q.size()<<endl;
    while(n--){
        int x; cin>>x;
        q.push(x);
    }
    cout<<"The size of the queue: "<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<"The size of the queue: "<<q.size()<<endl;
    return 0;
}