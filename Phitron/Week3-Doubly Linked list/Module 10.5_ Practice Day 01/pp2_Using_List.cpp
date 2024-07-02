#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    list<int>list1;
    while(1){
        int val;
        cin>>val;
        if(val==-1)break;
        list1.push_back(val);
    }
    list1.reverse();
    for(auto x:list1)
        cout<<x<<' ';
    return 0;
}