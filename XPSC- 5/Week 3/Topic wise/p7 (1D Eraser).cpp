// https://vjudge.net/problem/CodeForces-1873D

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int r = 0, ans = 0;
    bool ok=false;
    int prev;
    while (r < n)
    {
        if(s[r]=='B'){
            ans++;
            r += k-1;
        }
        r++;
    }
    cout << ans << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}