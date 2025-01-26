#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
        int n;
        cin >> n;
        map <int, int> d;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            d[x]++;
        }
        int cnt = 0;
        for (auto i : d) {
            ++cnt;
        }
        int cur_cnt = cnt;
        for (int k = 1; k <= n; ++k) {
            cout << max(k, cnt) << " ";
        }
        cout<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}