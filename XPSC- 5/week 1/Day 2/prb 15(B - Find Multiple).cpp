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
    int a, b, c;
    cin >> a >> b >> c;
    // int i = (a + c - 1) / c;
    // int mul = c * i;
    // cout << (mul >= a && mul <= b ? mul : -1) << endl;
    int i = 1, mul;
    while(1){
        mul = c * i;
        if(mul>=a && mul<=b){
            cout << mul << endl;
            return;
        }
        if(mul>b){
            cout << -1 << endl;
            return;
        }
        i++;
    }
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}