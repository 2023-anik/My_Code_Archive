//https://www.codechef.com/problems/FUM

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
const int MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    int i, ans = 1;
    for (i = 1; i <= n; i++){
        ans = ((ans % MOD) * (i % MOD)) % MOD;
    }
    cout << ans << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}