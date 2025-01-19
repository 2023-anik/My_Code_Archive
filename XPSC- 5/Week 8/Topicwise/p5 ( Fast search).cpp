#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &it:a){
        cin>>it;
    }
    sort(all(a));
    int q;
    cin>>q;
    int x, y;
    while(q--){
        cin>>x>>y;
        auto it1X = lower_bound(all(a), x);
        auto it2X = upper_bound(all(a), x);
        int ans = it2X-it1X;
        auto it1Y = lower_bound(all(a), y);
        auto it2Y = upper_bound(all(a), y);
        ans += (it2Y-it1Y);
        cout<<ans+(it1Y-it1X)-1<<" ";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}