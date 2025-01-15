/*
https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/special-queries-1-1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<string>q;
    int n;
    cin>>n;
    while(n--){
        int c;
        cin>>c;
        if(c==0){
            string str;
            cin>>str;
            q.push(str);
        }else if(c==1){
            if(q.empty()) cout<<"Invalid"<<endl;
            else{
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }
    return 0;
}