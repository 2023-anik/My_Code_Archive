// https://www.codechef.com/problems/KO_MON

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(){
    int n, x;
    cin>>n>>x;
    vector<int>a(n);
    for(auto &it:a){
        cin>>it;
    }
    sort(rall(a));
    int sum=0, ans = a[0];
    int i;
    for(i=1; i<n; i++){
        sum = x*i;
        ans = max(ans, a[i]+sum);
    }
    cout<<ans<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}