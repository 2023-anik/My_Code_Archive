#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve(){
    ll x, y;
    cin>>x>>y;
    cout<<x + (y*10)<<endl;
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