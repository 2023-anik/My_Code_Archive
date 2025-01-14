#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
typedef vector<int> vi;

void solve() {
    int n;
    cin >> n;
    vi a(n), b(n);
    for (auto &it : a) cin >> it;
    for (auto &it : b) cin >> it;
    int ans = 0;
    for (auto &it : b){
        ans += it;
    }
    int i;
    for (i = 0; i < n; i++){
        a[i] -= b[i];
    }
    sort(all(a));
    int val = 0;
    int sum = ans;
    for (i = 0; i < n; i++){
        val += a[i];
        if (i!=0){
            ans = min(ans, sum + val);
        }
    }
    cout << ans << "\n";
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}

