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
    map<int, int> mp;
    while(k--){
        cin >> b >> c;
        mp[b] += c;
    }
    vi cost;
    for(auto &it:mp)
        cost.push_back(it.second);
    sort(rall(cost));
    int t = 0, mn = min(n, (int)cost.size());
    int i;
    for (i = 0; i < mn; i++)
        t += cost[i];
    cout << t << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}