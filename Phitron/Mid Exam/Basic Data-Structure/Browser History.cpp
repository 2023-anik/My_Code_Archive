/*
https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-05/challenges/browser-history-1
*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    list<string>myList;
    string web;
    while(cin>>web){
        if(web=="end")break;
        myList.push_back(web);
    }
    int q; cin>>q;
    auto it=myList.begin();
    while(q--){
        string cmd; cin>>cmd;
        if(cmd=="visit"){
            string web_name; cin>>web_name;
            auto find_it=find(myList.begin(), myList.end(), web_name);
            if(find_it!=myList.end()){
                it=find_it;
                cout<<*it<<endl;
            }else cout<<"Not Available"<<endl;
        }
        else if(cmd=="next"){
            auto nxt_it=it;
            nxt_it++;
            if(nxt_it!=myList.end()){
                it=nxt_it;
                cout<<*it<<endl;
            }else cout<<"Not Available"<<endl;
        }
        else{
            if(it==myList.begin())cout<<"Not Available"<<endl;
            else{
                it--;
                cout<<*it<<endl;
            }
        }
    }
    return 0;
}