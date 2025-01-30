#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> ar(n);
    for (auto &it : ar) {
        cin >> it;
    }

    sort(all(ar));

    int ans = 0;
    int l = 0, r = n - 1;
    int a, b;
    while (l < r) {
        a = ar[l];
        b = ar[r];
        if (a + b == k) {
            ans++; 
            l++; 
            r--; 
        } else if (a + b < k) {
            l++; 
        } else {
            r--;
        }
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
