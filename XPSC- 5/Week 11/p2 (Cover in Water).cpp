#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i;
    bool ok = 0;
    int cnt = 0;
    for (i = 0; i < n-2; i++){
        if(s.substr(i, 3)=="..."){
            ok = 1;
            break;
        }
    }
    if(ok){
        cout << 2 << endl;
        return;
    }
    for (i = 0; i < n; i++){
        if(s[i]=='.'){
            cnt++;
        }
    }
    cout << cnt << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}