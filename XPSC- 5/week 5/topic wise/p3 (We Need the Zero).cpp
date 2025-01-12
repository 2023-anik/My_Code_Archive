//https://codeforces.com/problemset/problem/1805/A

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    int ans = 0, i, x;;
    for (i = 0; i < n; i++){
        cin >> x;
        ans ^= x;
    }
    if(n%2==1){
        cout << ans << endl;
    }
    else{
        cout << (ans == 0 ? x : -1) << endl;
    }
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}