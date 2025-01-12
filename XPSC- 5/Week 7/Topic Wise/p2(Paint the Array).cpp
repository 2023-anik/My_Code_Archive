// https://codeforces.com/problemset/problem/1618/C

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
typedef vector<int> vi;

void solve(){
    int n;
    cin >> n;
    vi arr(n);
    int g1 = 0, g2 = 0, i;
    for (i = 0; i < n; i++){
        cin >> arr[i];
        if(i%2==0)
            g1 = __gcd(g1, arr[i]);
        else
            g2 = __gcd(g2, arr[i]);
    }
    // cout << g1 << " " << g2 << endl;
    bool ok1 = 1, ok2 = 1;
    for (i = 0; i < n; i++){
        if(i%2==0){
            if(arr[i]%g2==0){
                ok2 = 0;
            }
        }
        else{
            if(arr[i]%g1==0){
                ok1 = 0;
            }
        }
        if(!ok1 && !ok2){
            cout << 0 << endl;
            return;
        }
    }
    cout << (ok1 ? g1 : g2) << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}