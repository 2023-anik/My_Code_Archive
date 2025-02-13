#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve(){
    ll n;
    cin>>n;
    if(n&(n-1)) yes;
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