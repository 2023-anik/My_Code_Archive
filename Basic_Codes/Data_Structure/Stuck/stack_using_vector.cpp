#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class myStack{
    public:
    vector<int>v;
    void push(int val){
        v.push_back(val);
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
    myStack st;
    int n; cin>>n;
    int m=n;
    cout<<st.size()<<endl;
    while(n--){
        int x; cin>>x;
        st.push(x);
    }
    cout<<st.size()<<endl;
    while(m--){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<st.size()<<endl;
    return 0;
}