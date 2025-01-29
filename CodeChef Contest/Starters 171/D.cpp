#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const vector<string> ptrns = {
    "RGB", "RBG", "GRB", "GBR", "BRG", "BGR"
};

/*
░█▀▀░█▀█░█▀▀░░░█▀▀░█▀▄░█▀▄░█▀█░█▀▄░█
░█▀▀░█░█░█▀▀░░░█▀▀░█▀▄░█▀▄░█░█░█▀▄░▀
░▀▀▀░▀▀▀░▀░░░░░▀▀▀░▀░▀░▀░▀░▀▀▀░▀░▀░▀
*/

void solve(){
    int n;
    string s;
    cin >> n >> s;

    int miniOps = n, cnt = 0;

    for (const auto &it : ptrns) {
        cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == it[i % 3]) {
                cnt++;
            }
        }
        miniOps = min(miniOps, n - cnt);
    }

    cout << miniOps << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
