//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A

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
    int n, s;
    cin >> n >> s;
    vi a(n);
    for(auto &it:a)
        cin >> it;

    //Brute Force Solutions
    // int ans = 0;
    // for(int i = 0; i < n; i++){
    //     int sum = 0;
    //     for (int j = i; j < n; j++){
    //         sum += a[j];
    //         if (sum <= s)
    //             ans = max(ans, j - i + 1);
    //         else {
    //             cout << ans << endl;
    //             return;
    //         }
    //     }
    // }

    //optimized approach
    int i = 0, j = 0, sum = 0, ans = 0;
    while(j<n){
        sum += a[j];
        if(sum<=s)
            ans = max(ans, j - i + 1);
        else{
            sum -= a[i];
            i++;
        }
        j++;
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