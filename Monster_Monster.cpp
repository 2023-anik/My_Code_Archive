#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(){
    int n, x;
    cin >> n >> x;
    vector<int> hp(n);
    for(auto &it:hp){
        cin>>it;
    }

    sort(rall(hp));

    int i, res = 0;
    for (i = 0; i < n; ++i) {
        res = max(res, hp[i]+i*x);
    }
    cout << res << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}