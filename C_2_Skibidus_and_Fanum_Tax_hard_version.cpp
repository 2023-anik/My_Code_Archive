#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define input(v) for(auto &i : v) cin >> i
#define ITE(i, a, b) for(auto i = a; i < b; i++)
#define ITER(i, a, b) for(auto i = a; i > b; i--)
#define ITEE(i, a, b) for(auto i = a; i <= b; i++)
#define ITERE(i, a, b) for(auto i = a; i >= b; i--)

void solve(){
    ll n, m;
    cin>>n>>m;
    vector<ll>a(n), b(m);
    input(a);
    input(b);11111111
    sort(all(b));
    ll previousElement = min(b[0]-a[0], a[0]);
    ITE(i, 1, n){
        if(max(b[m-1]-a[i], a[i])<previousElement){
            no;
            return;
        }
        int posi = lower_bound(all(b), previousElement+a[i]) - b.begin();
        if(posi>m-1) previousElement = a[i];
        else if(a[i]>=previousElement) previousElement = min(b[posi]-a[i], a[i]);
        else previousElement = b[posi]-a[i];
    }
    yes;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}