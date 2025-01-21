#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int i, j, cnt, ans = 100;
    for(i=0; i<=n-m; i++){
        cnt = 0;
        for(j=0; j<m; j++){
            cnt += (a[i+j]!=b[j]);
        }
        ans = min(ans, cnt);
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