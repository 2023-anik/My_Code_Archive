//https://codeforces.com/problemset/problem/1988/C

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    int msbit = __lg(n); // log2(n)
    int i;
    deque<int> ans;
    for (i = 0; i <= msbit; i++){
        if((n>>i)&1){
            // cout << 1 << " ";
            if(n-(1LL<<i)>0){
                ans.push_front(n - (1LL << i));
            }
        }
        // else
        //     cout << 0 << " ";
    }
    ans.push_back(n);
    cout << ans.size() << endl;
    for (auto &it : ans)
        cout << it << " ";
    cout << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}