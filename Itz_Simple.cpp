#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/*
░█▀▀░█▀█░█▀▀░░░█▀▀░█▀▄░█▀▄░█▀█░█▀▄░█
░█▀▀░█░█░█▀▀░░░█▀▀░█▀▄░█▀▄░█░█░█▀▄░▀
░▀▀▀░▀▀▀░▀░░░░░▀▀▀░▀░▀░▀░▀░▀▀▀░▀░▀░▀
*/

void solve() {
    int n, k, p;
    cin >> n >> k >> p;
    vector < int > a(n);
    for (auto & it: a) {
        cin >> it;
    }
    sort(rall(a));

    k += a[0];

    for (int i = 1; i < n; i++) {
        p += a[i];
    }

    if (k > p) {
        cout << "Ved" << endl;
    } else if (p > k) {
        cout << "Varun" << endl;
    } else {
        cout << "Equal" << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}