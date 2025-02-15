#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FOR(i, n) for (int i = 0; i < n; ++i)//0 to n-1
#define FOR1(i, n) for (int i = 1; i <= n; ++i)//1 to n
#define REP(i, a, b) for (int i = a; i <= b; ++i)//a to b inclusive
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve(){
    int n;
    cin >> n;
    string a, b, s;
    map<string, string> ans, has;
    FOR(i, n){
        cin >> a >> b;
        if(has.find(a) != has.end()){
            s = has[a];
            ans[s] = b;
            has.erase(a);
            has[b] = s;
        }else{
            ans[a] = b;
            has[b] = a;
        }
    }
    cout << ans.size() << endl;
    for (auto &[x, y] : ans)
        cout << x << " " << y << endl;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}