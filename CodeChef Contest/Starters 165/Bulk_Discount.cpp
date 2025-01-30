#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

/*
░█▀▀░█▀█░█▀▀░░░█▀▀░█▀▄░█▀▄░█▀█░█▀▄░█
░█▀▀░█░█░█▀▀░░░█▀▀░█▀▄░█▀▄░█░█░█▀▄░▀
░▀▀▀░▀▀▀░▀░░░░░▀▀▀░▀░▀░▀░▀░▀▀▀░▀░▀░▀
*/

void solve() {
    int n;
    cin >> n;
    vector < int > a(n);
    for (auto & it: a) {
        cin >> it;
    }
    sort(a.begin(), a.end());
    int cnt = 0;
    int ans = a[0];
    for (int i = 1; i < n; i++) {
        cnt++;
        a[i] -= cnt;
        if (a[i] >= 0) {
            ans += a[i];
        }
    }
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}