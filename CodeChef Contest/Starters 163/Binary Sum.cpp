#include<bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    int n, k;
    cin>>n>>k;
    if(n/2==k or (n/2)+(n%2)==k){
        yes;
    }else{
        no;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}