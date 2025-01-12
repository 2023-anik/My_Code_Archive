// https://codeforces.com/problemset/problem/1975/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;
    cin >> n;
    vi ar(n);
    for(auto &it:ar){
        cin >> it;
    }
    int i;
    bool ok = 1;
    for (i = 0; i < n - 1; i++){
        if(ar[i] > ar[i + 1]){
            ok = 0;
            break;
        }
    }
    if(ok){
        yes;
        return;
    }
    vi x, y, ans;
    int z = n;
    for (i = 0; i < n - 1; i++){
        if(ar[i] <= ar[i + 1]){
            x.push_back(ar[i]);
        } else {
            z = i + 1;
            break;
        }
    }
    x.push_back(ar[z - 1]);
    for (i = z; i < n; i++){
        y.push_back(ar[i]);
    }
    // ans = x + y
    ans.insert(ans.end(), x.begin(), x.end());
    ans.insert(ans.end(), y.begin(), y.end());
    ok = 1;
    for (i = 0; i < n - 1; i++){
        if(ans[i] > ans[i + 1]){
            ok = 0;
            break;
        }
    }
    if(ok){
        yes;
        return;
    } else {
        ok = 1;
        ans.clear();
        // ans = y + x
        ans.insert(ans.end(), y.begin(), y.end());
        ans.insert(ans.end(), x.begin(), x.end());
        for (i = 0; i < n - 1; i++){
            if(ans[i] > ans[i + 1]){
                ok = 0;
                break;
            }
        }
        if(ok){
            yes;
            return;
        } else {
            no;
            return;
        }
    }
}

int32_t main(){
    FAST
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}