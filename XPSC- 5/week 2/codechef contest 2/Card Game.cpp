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
    int n, x;
    cin >> n >> x;
    int i, evenCnt = 0, oddCnt = 0;
    for (i = 1; i <= n; i++){
        if(i==x) continue;
        i % 2 == 0 ? evenCnt++ : oddCnt++;
    }
    cout << (x % 2 == 0 ? evenCnt : oddCnt) << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}