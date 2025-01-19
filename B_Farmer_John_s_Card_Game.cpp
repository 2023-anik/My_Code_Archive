#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

bool check(int n, int m, const vector<vector<int>>& cards, const vector<int>& p) {
    int top = -1;
    vector<bool> used(n * m, 0);
    for (int round = 0; round < m; ++round) {
        for (int i = 0; i < n; ++i) {
            int cow = p[i] - 1;
            int bestCard = -1;
            for (auto &card : cards[cow]) {
                if (card > top && !used[card]) {
                    if (bestCard == -1 || card < bestCard) {
                        bestCard = card;
                    }
                }
            }
            if (bestCard == -1) {
                return false;
            }
            top = bestCard;
            used[bestCard] = true;
        }
    }
    return true;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> cards(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> cards[i][j];
        }
        sort(all(cards[i]));
    }

    vector<pair<int, int>> minCards;
    for (int i = 0; i < n; ++i) {
        minCards.push_back({cards[i][0], i});
    }
    sort(all(minCards));

    vector<int> p;
    for (auto &[val, idx] : minCards) {
        p.push_back(idx + 1);
    }

    if (check(n, m, cards, p)) {
        for (int i = 0; i < n; ++i) {
            cout << p[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
