#include<bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    int a, x, y;
    cin>>a>>x>>y;
    a<=(x+y)?yes:no;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--) solve();
    return 0;
}