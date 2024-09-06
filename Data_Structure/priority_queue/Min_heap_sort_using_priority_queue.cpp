#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    priority_queue<int, vector<int>, greater<int>>pq;
    while(1){
        int c; cin>>c;
        if(c==0){
            int x; cin>>x;
            pq.push(x);
        }
        else if(c==1)
            pq.pop();
        else if(c==2)
            cout<<pq.top()<<endl;
        else if(c==3)
            break;
    }
    return 0;
}