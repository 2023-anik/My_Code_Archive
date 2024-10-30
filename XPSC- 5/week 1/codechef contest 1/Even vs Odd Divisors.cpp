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
    int n;
    cin >> n;
    int i, cnte = 0, cnto = 0;
    for (i = 1; i <= n; i++)
        if(n%i==0)
            (i % 2 == 0 ? cnte++ : cnto++);
    if (cnte > cnto)
        cout << 1 << endl;
    else if(cnte == cnto) 
        cout << 0 << endl;
    else
        cout << -1 << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}