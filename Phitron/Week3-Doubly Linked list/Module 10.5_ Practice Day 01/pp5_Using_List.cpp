#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    list<int>my_list;
    while(1){
        int v; cin>>v;
        if(v==-1)break;
        my_list.push_back(v);
    }
    my_list.sort();
    for(auto &x:my_list)cout<<x<<' ';
    cout<<endl;
    return 0;
}