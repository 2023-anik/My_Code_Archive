#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        set<int>s;
        while(n--){
            int x; cin>>x;
            s.insert(x);
        }
        for(auto a:s) cout<<a<<" ";
            cout<<endl;
    }
    return 0;
}