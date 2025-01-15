/*
https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/same-or-not-ii
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    queue<int>q;
    int n, m;
    cin>>n>>m;
    while(n--){
        int x;
        cin>>x;
        s.push(x);
    }
    while(m--){
        int x;
        cin>>x;
        q.push(x);
    }
    if(s.size()!=q.size()){
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
}