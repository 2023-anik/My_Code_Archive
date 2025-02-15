#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'

void solve(){
    string s1, s2;
    cin>>s1>>s2;
    if(s1=="sick" and s2=="sick"){
        cout<<1<<endl;
    }else if(s1=="sick" and s2=="fine"){
        cout<<2<<endl;
    }else if(s1=="fine" and s2=="sick"){
        cout<<3<<endl;
    }else{
        cout<<4<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}