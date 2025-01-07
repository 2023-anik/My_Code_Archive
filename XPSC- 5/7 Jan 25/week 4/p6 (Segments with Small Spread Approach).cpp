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
    vi a(n);
    for(auto &it:a)
        cin >> it;
    int l = 0, r = 0, ans = 0;
    multiset<int> ml;
    int mn, mx;
    // while (r < n){
    //     ml.insert(a[r]);
    //     mn = *ml.begin();
    //     mx = *ml.rbegin();
    //     if(mx-mn<=k)
    //         ans += (r - l + 1);
    //     else{
    //         while(l<r){
    //             if(mx-mn<=k)
    //                 break;
    //             ml.erase(ml.find(a[l]));
    //             l++;
    //             mn = *ml.begin();
    //             mx = *ml.rbegin();
    //         }
    //         if (mx - mn <= k)
    //             ans += (r - l + 1);
    //     }
    //     r++;
    // }
    // cout << ans << endl;

    // simple modification in code writing part not in logic
    while (r < n){
        ml.insert(a[r]);
        mn = *ml.begin();
        mx = *ml.rbegin();
        while(mx-mn>k && l<=r){
            if(mx-mn<=k)
                break;
            ml.erase(ml.find(a[l]));
            l++;
            mn = *ml.begin();
            mx = *ml.rbegin();
        }
        ans += (r - l + 1);
        r++;
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