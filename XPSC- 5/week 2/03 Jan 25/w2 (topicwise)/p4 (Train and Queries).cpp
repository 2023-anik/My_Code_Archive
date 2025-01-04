//https://codeforces.com/problemset/problem/1702/C

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
    map<int, multiset<int>> mp;
    int i, x;
    for (i = 1; i<=n; i++){
        cin >> x;
        mp[x].insert(i);
    }
    int a, b;
    while (k--){
        cin >> a >> b;
        if(mp.find(a)!=mp.end() && mp.find(b)!=mp.end())
            *mp[a].begin() < *mp[b].rbegin() ? yes : no;
        else
            no;
    }
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}