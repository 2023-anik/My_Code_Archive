#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void print_binary(int num){
    for(int i=8; i>0; --i){
        cout<<((num>>i)&1);//right shifting
    }
    cout<<endl;
}

int main(){
    int a=5, b=7;
    // cout<<(a&b)<<endl;
    // cout<<(a|b)<<endl;
    // cout<<(a^b)<<endl;
    print_binary((a&b));
    print_binary((a|b));
    print_binary((a^b));
    return 0;
}