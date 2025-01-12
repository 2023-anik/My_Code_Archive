// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
typedef vector<int> vi;

void solve(){
    int n, m;
    cin >> n >> m;
    vi a(n), b(m), ans;
    for(auto &it:a)
        cin >> it;
    for(auto &it:b)
        cin >> it;
    int la = 0, lb = 0, crnt;
    while (la < n && lb < m){
        while(la < n && b[lb]>=a[la]){
            ans.push_back(a[la]);
            la++;
        }
        while(lb < m && a[la]>=b[lb]){
            ans.push_back(b[lb]);
            lb++;
        }
    }
    while(lb!=m){
        ans.push_back(b[lb]);
        lb++;
    }
    while(la!=n){
        ans.push_back(a[la]);
        la++;
    }
    for(auto &it:ans)
        cout << it << " ";
    cout << endl;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}