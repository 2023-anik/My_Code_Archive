#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void update(set<int>&s, int x){
    if(!s.insert(x).second){
        //for already present
        s.erase(x);
        update(s, 2 * x);
    }
}

void solve(){
    int n, x;
    cin >> n;
    set<int> s;
    while(n--){
        cin >> x;
        update(s, x);
        cout << s.size() << " ";
    }
    cout << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}