//https://www.codechef.com/problems/ADD12GAME

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve(){
    int n;
    cin >> n;
    cout << (n == 1 ? "ALICE" : "BOB") << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}