//https://codeforces.com/problemset/problem/678/C

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

int LCM(int x, int y){
    return (x / __gcd(x, y)) * y;
}

void solve(){
    int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q; 
    int x = (n / a) * p, y = (n / b) * q, overlap = n / LCM(a, b);
    int ans = (x + y - overlap*(p+q)) + (overlap * max(p, q));
    cout << ans << endl;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}