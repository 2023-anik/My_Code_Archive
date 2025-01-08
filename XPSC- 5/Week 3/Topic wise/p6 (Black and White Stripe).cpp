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
    // int l = 0, r = 0, ans = INT_MAX, countB = 0;
    // while (r < n) {
    //     if (s[r] == 'B')
    //         countB++;
        
    //     if (r - l + 1 == k) {
    //         ans = min(ans, k - countB);
    //         if (s[l] == 'B')
    //             countB--;
    //         l++;
    //     }
    //     r++;
    // }
    // cout << ans << endl;
    int l = 0, r = 0, ans = INT_MAX;
    map<char, int> mp;
    while(r<n){
        if(s[r]=='B')
            mp['B']++;
        if(r-l+1==k){
            ans = min(ans, k - mp['B']);
            if(s[l]=='B')
                mp['B']--;
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