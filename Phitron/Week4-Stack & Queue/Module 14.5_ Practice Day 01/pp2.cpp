/*
Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.
*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    stack<int>s;
    queue<int>q;
    int n; cin>>n;
    for(int i=0; i<n; ++i){
        int x; cin>>x;
        s.push(x);
    }
    int m; cin>>m;
    for(int i=0; i<m; ++i){
        int x; cin>>x;
        q.push(x);
    }
    if(n!=m){
        cout<<"NO"<<endl;
        return 0;
    }
    while(!s.empty()){
        if(s.top()!=q.front()){
            cout<<"NO"<<endl;
            return 0;
        }
        s.pop();
        q.pop();
    }
    cout<<"YES"<<endl;
    return 0;
}