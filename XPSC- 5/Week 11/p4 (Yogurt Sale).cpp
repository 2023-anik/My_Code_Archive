//https://codeforces.com/problemset/problem/1955/A

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    if(n%2==0){
        cout << min(n * a, (n / 2) * b) << endl;
        return;
    }
    cout << min(n * a, ((n / 2) * b) + a) << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}