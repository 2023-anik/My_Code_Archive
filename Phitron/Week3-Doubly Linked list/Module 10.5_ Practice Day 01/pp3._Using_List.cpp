#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    list<int>my_list;
    while(1){
        int val;
        cin>>val;
        if(val==-1)break;
        my_list.push_back(val);
    }
    list<int>cpy_list=my_list;
    cpy_list.reverse();
    cout<<((cpy_list==my_list)?"YES":"NO")<<endl;
    return 0;
}