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
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    
    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
            cnt++;

    // Check the conditions
    if (cnt % 2 != 0) {
        cout << "NO" << endl;  // Odd mismatches cannot be resolved with swaps
    } else {
        // Check if K is sufficient and the excess can be handled
        if (k >= cnt / 2 && (k - cnt / 2) % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}


int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}