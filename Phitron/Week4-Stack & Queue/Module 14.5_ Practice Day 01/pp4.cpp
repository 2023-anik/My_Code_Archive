/*
Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.
*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    queue<int>q;
    int n; cin>>n;
    for(int i=0; i<n; ++i){
        int x; cin>>x;
        q.push(x);
    }
    stack<int>s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        cout<<q.front()<<' ';
        q.pop();
    }
    return 0;
}