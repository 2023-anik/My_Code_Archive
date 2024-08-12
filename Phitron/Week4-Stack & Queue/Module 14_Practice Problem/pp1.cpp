/*
Write a program that reads integers into Queue1 and Queue2, merges them into MergedQueue, and then prints the elements of MergedQueue.
*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    queue<int>q1, q2;
    int n, m;
    cin>>n;
    while(n--){
        int x; cin>>x;
        q1.push(x);
    }
    cin>>m;
    while(m--){
        int x; cin>>x;
        q2.push(x);
    }
    queue<int>MergedQueue;
    while(!q1.empty()){
        MergedQueue.push(q1.front());
        q1.pop();
    }
    while(!q2.empty()){
        MergedQueue.push(q2.front());
        q2.pop();
    }
    while(!MergedQueue.empty()){
        cout<<MergedQueue.front()<<' ';
        MergedQueue.pop();
    }
    return 0;
}