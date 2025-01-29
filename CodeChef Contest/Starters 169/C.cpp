#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int i, x;
    bool ok = 1;
    for(i=1; i<=n; i++){
        cin>>x;
        if(__builtin_popcount(x)!=__builtin_popcount(i)){
            ok = 0;
        }
    }
    cout<<(ok?"Yes":"No")<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}
