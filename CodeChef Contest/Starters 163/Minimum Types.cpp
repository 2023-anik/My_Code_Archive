#include<bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve() {
    int n, x;
    cin>>n>>x;
    map<int,int, greater<int>>mp;
    vector<int>a(n), b(n), p(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    for(int i=0; i<n; i++){
        p.push_back(a[i]*b[i]);
    }
    sort(rall(p));
    int sum=0, cnt=0;
    for(auto &it:p){
        sum+=it;
        cnt++;
        if(sum>=x){
            cout<<cnt<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}