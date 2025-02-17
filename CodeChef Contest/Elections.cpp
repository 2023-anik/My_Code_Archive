#include<bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    int n, x;
    cin>>n>>x;
    vector<int>a(n), b(n), remain;
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    int cntA=0;
    for(int i=0; i<n; i++){
        if(a[i]>b[i]){
            cntA++;
        }else{
            remain.push_back(b[i]-a[i]+1);
        }
    }
    if(cntA>(n/2)){
        yes;
        return;
    }
    sort(all(remain));
    for(auto &it:remain){
        if(x>=it){
            x-=it;
            cntA++;
            if(cntA>(n/2)){
                yes;
                return;
            }
        }else{
            no;
            return;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}