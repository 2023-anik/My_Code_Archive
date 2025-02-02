#include<bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    int n, m;
    cin>>n>>m;
    int x;
    unordered_map<int, int>mp1, mp2;
    for(int i=1; i<=n; i++){
        cin>>x;
        mp1[i]=x;
    }
    for(int i=1; i<=m; i++){
        cin>>x;
        mp2[x]++;
    }
    int res=0;
    for(auto &[x, y]:mp2){
        if(y-mp1[x]>0)
            res+=y-mp1[x];
    }
    cout<<res<<endl;
    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}