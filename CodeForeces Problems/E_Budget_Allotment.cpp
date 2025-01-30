#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define rall(x) x.rbegin(), x.rend()
#define all(x) x.begin(), x.end()

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a, b;
    int ok = 0, y;

    for (int i = 0; i < n; i++) {
        cin >> y;
        if (y >= x) {
            ok++;
            a.push_back(y - x);
        } else {
            b.push_back(x - y);
        }
    }

    int sum = 0;
    for(auto &it:a){
        sum+=it;
    }

    sort(b.begin(), b.end());

    for (auto &it : b) {
        if (sum >= it) {
            ok++;
            sum -= it;
        } else {
            break;
        }
    }

    cout << ok << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
