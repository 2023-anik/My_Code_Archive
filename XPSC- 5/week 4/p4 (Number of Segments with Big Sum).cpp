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
    int n, k;
    cin >> n >> k;
    vi a(n);
    for(auto &it:a)
        cin >> it;
    int l = 0, r = 0, ans = 0, sum = 0;
    while(r < n){
        sum += a[r];
        while(sum >= k){
            ans += (n - r);
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << ans << endl;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}