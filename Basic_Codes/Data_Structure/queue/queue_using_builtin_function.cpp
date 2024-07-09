#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    queue<int>q;
    int n; cin>>n;
    cout<<"Size of the queue: "<<q.size()<<endl;
    while(n--){
        int x; cin>>x;
        q.push(x);
    }
    cout<<"Size of the queue: "<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<"Size of the queue: "<<q.size()<<endl;
    return 0;
}