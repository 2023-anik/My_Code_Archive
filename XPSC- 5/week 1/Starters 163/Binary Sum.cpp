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

void solve() {
    int n, k;
    cin >> n >> k;
    int maxOnes = (n + 1) / 2;
    if (k > maxOnes) {
        cout << "NO" << endl;
        return;
    }
    string r = "";
    int i;
    for (i = 0; i < n; i++){
        if (k > 0 && i % 2 == 0) {
            r += '1';
            k--;
        } else
            r += '0';
    }
    cout << "YES" << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}