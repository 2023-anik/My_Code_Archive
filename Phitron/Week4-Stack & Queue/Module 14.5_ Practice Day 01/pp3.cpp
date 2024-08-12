/*
Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.
*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    stack<int>s;
    int n; cin>>n;
    while(n--){
        int x; cin>>x;
        s.push(x);
    }
    stack<int>s2;
    while(!s.empty()){
        // cout<<s2.top()<<' ';
        s2.push(s.top());
        s.pop();
    }
    while(!s2.empty()){
        cout<<s2.top()<<' ';
        // s2.push(s.top());
        s2.pop();
    }
    return 0;
}