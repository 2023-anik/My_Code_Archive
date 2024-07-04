/*
https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-05/challenges/remember-previous-queries
*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    list<int>my_list;
    int q; cin>>q;
    while(q--){
        int x, v;
        cin>>x>>v;
        if(x==2){
            if(v<my_list.size()){
                // cout<<"Invalid"<<endl;
                my_list.erase(next(my_list.begin(), v));
            }
            // else{
            //     my_list.erase(next(my_list.begin(), v));
            // }
        }
        else if(x==0)my_list.push_front(v);
        else if(x==1)my_list.push_back(v);
        cout<<"L -> ";
        for(auto i=my_list.begin(); i!=my_list.end(); i++)
            cout<<*i<<' ';
        cout<<endl;
        cout<<"R -> ";
        for(auto i=my_list.rbegin(); i!=my_list.rend(); i++)
            cout<<*i<<' ';
        cout<<endl;
    }
    return 0;
}