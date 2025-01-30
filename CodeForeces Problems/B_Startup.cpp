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
    int n, k, b, c;
    cin >> n >> k;
    unordered_map<int, int> mp;
    while(k--){
        cin >> b >> c;
        mp[b] += c;
    }
    vi cost;
    for(auto &[x, y]:mp)
        cost.push_back(y);
    sort(rall(cost));
    int res = 0, mini = min(n, (int)cost.size());
    int i;
    for (i = 0; i < mini; i++)
        res += cost[i];
    cout << res << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}