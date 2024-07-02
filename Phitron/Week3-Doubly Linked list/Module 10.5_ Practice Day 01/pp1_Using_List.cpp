#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    list<int>list1, list2;
    while(1){
        int val;
        cin>>val;
        if(val==-1)break;
        list1.push_back(val);
    }
    while(1){
        int val;
        cin>>val;
        if(val==-1)break;
        list2.push_back(val);
    }
    cout<<((list1==list2)?"YES":"NO")<<endl;
    return 0;
}