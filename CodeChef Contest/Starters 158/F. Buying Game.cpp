#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
typedef vector<int> vi;

void solve() {
    int n;
    cin >> n;
    vi a(n), b(n);
    for (auto &it : a) cin >> it;
    for (auto &it : b) cin >> it;
    int idx = -1;
    int cnt = 0;
    int i, ans=0;
    for(i=0; i<n; i++){
        if(min(a[i], b[i]) != b[i]){
            cnt++;
            idx = i;
        }
        ans+=b[i];
    }
    if(cnt==0){
        cout<<ans<<endl;
        return;
    }
    if(cnt>1){
        ans = 0;
        for(i=0; i<n; i++){
            ans+=min(a[i], b[i]);
        }
        cout<<ans<<endl;
        return;
    }
    int res = ans, crnt;
    if(cnt==1){
        for(i=0; i<n; i++){
            if(i!=idx){
                crnt = res - b[i] - b[idx] + a[i] + a[idx];
                ans = min(ans, crnt);
            }
        }
        cout<<ans<<endl;
    }
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}

