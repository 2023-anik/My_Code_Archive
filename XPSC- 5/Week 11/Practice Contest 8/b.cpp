#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    int x;
    int cnt = 0;
    int i;
    for (i = 0; i < n; i++){
        cin >> x;
        cnt += (x+1)/2;
    }
    cout << cnt << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}