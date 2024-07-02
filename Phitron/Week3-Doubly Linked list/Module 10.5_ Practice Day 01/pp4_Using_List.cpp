#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void reverse_print(list<int>my_list){
    my_list.reverse();
    for(auto x:my_list)cout<<x<<' ';
    cout<<endl;
}

int main(){
    list<int>my_list;
    int q; cin>>q;
    while(q--){
        int x, v;
        cin>>x>>v;
        if(x>my_list.size())
            cout<<"Invalid"<<endl;
        else{
            my_list.insert(next(my_list.begin(), x), v);
            for(auto x:my_list)cout<<x<<' ';
            cout<<endl;
            reverse_print(my_list);
        }    
    }
    return 0;
}