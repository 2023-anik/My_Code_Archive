#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (auto &it : p) cin >> it;

    vector<int> sorted = p;
    sort(sorted.begin(), sorted.end());

    unordered_map<int, vector<int>> grps;
    int i, setBits;
    for ( i = 0; i < n; ++i) {
        setBits = __builtin_popcountll(p[i]);
        grps[setBits].push_back(i);
    }

    vector<int> org, trg;
    for (const auto& it : grps) {
        for (auto &idx : it.second) {
            org.push_back(p[idx]);
            trg.push_back(sorted[idx]);
        }
        sort(org.begin(), org.end());
        sort(trg.begin(), trg.end());
        if (org != trg) {
            cout << "No" <<endl;
            return;
        }
        org.clear();
        trg.clear();
    }
    cout << "Yes" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}
