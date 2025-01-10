//https://codeforces.com/problemset/problem/1097/B

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve(){
    int n;
    cin >> n;
    vi a(n);
    for(auto &it:a)
        cin >> it;
    int cnt;
    int i, mask;
    bool ok = 0;
    for (mask = 0; mask < (1 << n); mask++){
        cnt = 0;
        for (i = 0; i<n; i++){
            if((mask>>i)&1){
                cnt += a[i];//for bit on
            }else
                cnt -= a[i];//for bit off
        }
        // cout << cnt << endl;
        if (cnt%360==0){
            yes;
            return;
        }
    }
    no;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}