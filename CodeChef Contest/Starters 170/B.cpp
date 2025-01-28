// https://www.codechef.com/problems/MINBOTTLES

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, x;
    cin >> n >> x;
    int c, sum = 0;
    while (n--) {
        cin >> c;
        sum += c;
    }
    int res = sum / x;
    if (sum % x != 0) {
        res++;
    }
    cout << res << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}