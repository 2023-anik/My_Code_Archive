//https://codeforces.com/contest/918/problem/B

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
    int n, m;
    cin >> n >> m;
    string a, b;
    map<string, string> mp;
    while(n--){
        cin >> a >> b;
        mp[b] = a;
    }
    while(m--){
        cin >> a >> b;
        b.pop_back();
        cout << a << " " << b << "; #" << mp[b] << endl;
    }
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}