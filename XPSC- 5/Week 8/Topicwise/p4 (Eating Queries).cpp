#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(){
    int n, q;
    cin>>n>>q;
    vector<int>a(n), prefixSum(n+1);
    for(auto &it:a){
        cin>>it;
    }
    sort(rall(a));
    int i;
    for(i=1; i<=n; i++){
        prefixSum[i]=prefixSum[i-1]+a[i-1];
    }
    int x;
    while(q--){
        cin>>x;
        auto it = lower_bound(all(prefixSum), x);
        cout<<(it==prefixSum.end()?-1:distance(prefixSum.begin(), it))<<endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}