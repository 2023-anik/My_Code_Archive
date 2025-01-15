/*
https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/elimination-2-2
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        stack<char>s;
        cin>>str;
        for(char ch: str){
            if(!s.empty() && (ch=='1' && s.top()=='0'))
                s.pop();
            else s.push(ch);
        }
        cout<<(s.empty()?"YES":"NO")<<endl;
    }
    return 0;
}