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
    int n, k, d;
    cin >> n >> k >> d;
    vi ar(n);
    for(auto &it:ar){
        cin >> it;
    }
    int l = 0, r = d - 1;
    set<int> s;
    int minS = INT_MAX, i, sizeS;
    while (r < n){
        for (i = l; i <= r; i++){
            s.insert(ar[i]);
        }
        l++;
        r++;
        sizeS = s.size();
        minS = min(minS, sizeS);
        s.clear();
    }
    cout << minS << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}