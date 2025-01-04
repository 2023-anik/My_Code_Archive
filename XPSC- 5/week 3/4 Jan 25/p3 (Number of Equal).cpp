//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C

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
    //solution (1) using map
    // int n, m;
    // cin >> n >> m;
    // map<int, int> mpa, mpb;
    // int i, x;
    // for (i = 0; i < n; i++) {
    //     cin >> x;
    //     mpa[x]++;
    // }
    // for (i = 0; i < m; i++) {
    //     cin >> x;
    //     mpb[x]++;
    // }
    
    // int cnt = 0, k;
    // for (const auto& v : mpa) {
    //     k = v.first;
    //     cnt += v.second * mpb[k];
    // }
    // cout << cnt << endl;

    //solution(2) using Two pointer technique
    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    
    for(auto &it:a)
        cin >> it;
    for(auto &it:b)
        cin >> it;

    int i = 0, j = 0, crnt, cnt1, cnt2;
    int ans = 0;
    while(i < n && j < m){
        crnt = a[i], cnt1 = 0, cnt2 = 0;
        while (i < n && crnt==a[i]){
            i++, cnt1++;
        }
        while(j < m && crnt>b[j])
            j++;
        while(j < m && crnt==b[j]){
            j++, cnt2++;
        }
        ans += cnt1 * cnt2;
    }
    cout << ans << endl;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}