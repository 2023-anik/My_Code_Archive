#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define yes cout << "First" << endl
#define no cout << "Second" << endl
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define input(v) for(auto &i : v) cin >> i

void solve(){
    ll n;
    cin>>n;
    if(n%3==1 or n%3==2) yes;
    else no;
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