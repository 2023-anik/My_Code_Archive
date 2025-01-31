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
    int sum = 0;
    for (auto & it: a) {
        cin >> it;
        sum += it;
    }
    int x = 100 * (n + 1);
    x /= 2;
    if (x <= sum) {
        cout << 0 << endl;
    }
    else if (x - sum <= 100) {
        cout << x - sum << endl;
    }
    else {
        cout << -1 << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}