//https://codeforces.com/problemset/problem/1165/B

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
    int n;
    cin >> n;
    multiset<int> s;
    int i, x;
    for (i = 1; i <= n; i++){
        cin >> x;
        s.insert(x);
    }
    int day = 0;
    for (i = 1; i <= n; i++){
        auto it = s.lower_bound(i);
        if(it!=s.end()){
            day++;
            s.erase(it);//to delete the perticipation of selected contest
        }
    }
    cout << day << endl;
    return;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}