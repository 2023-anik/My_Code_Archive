#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'
#define rall(v) v.rbegin(), v.rend()
#define all(v) v.begin(), v.end()

void solve(){
    ll n, m;
    cin>>n>>m;
    ll x;
    vector<ll>scores(n), sum(n);
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>x;
            sum[i] += x;
            x *= m-j;
            scores[i] += x;
        }
    }
    sort(all(sum));
    ll res = 0;
    for(ll i=n-1; i>=0; i--){
        res += scores[i], res += sum[i]*i*m;
    }
    cout<<res<<endl;
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