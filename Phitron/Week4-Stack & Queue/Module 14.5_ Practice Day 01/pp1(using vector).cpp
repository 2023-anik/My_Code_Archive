#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class myStack{
    public:
    vector<int>v;
    void push(int value){
        v.push_back(value);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.size()==0;
    }
};

int main(){
    myStack s1, s2;
    int n, m;
    cin>>n;
    for(int i=0; i<n; ++i){
        int x; cin>>x;
        s1.push(x);
    }
    cin>>m;
    for(int i=0; i<m; ++i){
        int x; cin>>x;
        s2.push(x);
    }
    if(s1.size()!=s2.size()){
        cout<<"NO"<<endl;
        return 0;
    }
    while(!s1.empty()){
        if(s1.top()!=s2.top()){
            cout<<"NO"<<endl;
            return 0;
        }
        s1.pop();
        s2.pop();
    }
    cout<<"YES"<<endl;
    return 0;
}