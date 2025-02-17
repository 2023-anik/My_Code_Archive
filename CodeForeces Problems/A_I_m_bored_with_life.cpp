#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'
const ll MOD = 1e9;

void solve(){
    ll a, b;
    cin>>a>>b;
    // a %= MOD;
    // b %= MOD;
    ll res = 1;
    for(ll i=1; i<=min(a, b); i++){
        res *= i;
    }
    cout<<res<<endl;
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