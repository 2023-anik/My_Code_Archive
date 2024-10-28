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

// solution 1
//  void solve(){
//      int n;
//      cin >> n;
//      vector<int> vec;
//      FOR(i, n){
//          int x;
//          cin>>x;
//          vec.push_back(x);
//      }
//      int s = 0, d = 0;
//      bool sTurn = 1;
//      int max_s = 0, max_d = 0;
//      while(!vec.empty()){
//          if(sTurn){
//              max_s = max(vec.front(), vec.back());
//              s += max_s;
//              if(max_s == vec.front())
//                  vec.erase(vec.begin());
//              else vec.pop_back();
//          } else{
//              max_d = max(vec.front(), vec.back());
//              d += max_d;
//              if(max_d == vec.front())
//                  vec.erase(vec.begin());
//              else vec.pop_back();
//          }
//          sTurn = !sTurn;
//      }

//     cout << s << " " << d << endl;
// }

// solution 2
void solve()
{
    int n;
    cin >> n;
    deque<int> dq(n);
    FOR(i, n)
        cin >> dq[i];
    int s = 0, d = 0, left, right, mx;
    bool sTurn = 1;
    while (!dq.empty())
    {
        left = dq.front(), right = dq.back();
        mx = max(left, right);
        if (sTurn)
            s += mx;
        else
            d += mx;
        if (mx == dq.front())
            dq.pop_front();
        else
            dq.pop_back();
        sTurn = !sTurn;
    }
    cout << s << " " << d << endl;
}

int32_t main()
{
    FAST int t = 1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}