#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FOR(i, n) for (int i = 0; i < n; ++i)     // 0 to n-1
#define FOR1(i, n) for (int i = 1; i <= n; ++i)   // 1 to n
#define REP(i, a, b) for (int i = a; i <= b; ++i) // a to b inclusive
#define FAST                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define endl '\n'
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve()
{
    int n;
    cin >> n;
    map<pair<string, string>, bool> mp;
    string s1, s2;
    while (n--)
    {
        cin >> s1 >> s2;
        mp[{s1, s2}] = 1;
    }
    // map<string, bool>mp;
    // string s;
    // cin.ignore();
    // while(n--){
    //     getline(cin, s);
    //     mp[s] = 1;
    // }
    cout << mp.size() << endl;
}

int32_t main()
{
    FAST int t = 1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}