//https://www.codechef.com/problems/CHEFSTUD

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
    string s;
    cin >> s;
    int cnt = 0;
    int i, n = s.length();
    for(i=0; i<n-1; i++){
        if(s[i]=='<' && s[i+1]=='>')
            cnt++;
    }
    cout << cnt << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}