#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    stack<int>st;
    // st.push(10);
    // st.push(20);
    // cout<<st.top()<<endl;
    // st.pop();//remain 10
    // st.pop();//empty stack
    // if(!st.empty())cout<<st.top()<<endl;
    // cout<<st.size()<<endl;//sz: 0
    int n; cin>>n;
    for(int i=1; i<=n; ++i){
        int x; cin>>x;
        st.push(x);
    }
    cout<<st.size()<<endl;
    for(int i=1; i<=n; ++i){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<st.size()<<endl;
    return 0;
}