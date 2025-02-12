#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define input(v) for(auto &i : v) cin >> i

void findCS(ll n, vector<ll>& ar){
    unordered_map<ll, ll>mp;
    for(auto &it:ar) mp[it]++;
    for(auto &[x, y]:mp){
        if(y>=2){
            cout<<1<<endl;
            cout<<x<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll>ar(n);
    input(ar);
    findCS(n, ar);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}