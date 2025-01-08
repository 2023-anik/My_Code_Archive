// https://vjudge.net/problem/CodeForces-1873D

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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l = 0, r = 0, ans = 0, cntB = 0;
    while(r<n){
        if(s[r]=='B'){
            // s[r] = 'W';
            cntB++;
        }
        if(r-l+1==k){
            ans += cntB;
            if (s[l] == 'B')
                cntB--;
            l++;
        }
        r++;
    }
    cout << ans << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}