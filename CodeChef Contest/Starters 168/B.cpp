#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it:a)
        cin >> it;
    int ans = a[0];
    cout << 1 << " ";
    int i;
    for (i = 1; i < n; i++){
        if(ans<a[i]){
            cout << 1 << " ";
            ans = a[i];
        }else
            cout << 0 << " ";
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