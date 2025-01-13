#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
typedef vector<int> vi;

void solve(){
    int n;
    cin >> n;
    vi arr(n);
    for (auto &it:arr){
        cin >> it;
    }
    sort(all(arr));
    swap(arr[1], arr[n - 1]);
    int res = 0, i;
    for (i = 0; i < n - 1; i++){
        res += arr[i] + arr[i + 1];
    }
    cout << res << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}