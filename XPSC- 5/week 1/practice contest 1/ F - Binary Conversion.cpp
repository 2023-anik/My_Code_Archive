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
typedef pair<char, char> pii;

int cnt(string &s, char x){
    return count(s.begin(), s.end(), x);
}

void solve(){
    int n, k;
    cin >> n >> k;
    string a, b;
    cin >> a >> b;
    int cnta1 = cnt(a, '1');
    // int cnta0 = cnt(a, '0');
    int cntb1 = cnt(b, '1');
    // int cntb0 = cnt(b, '0');
    if(cnta1!=cntb1){
        no;
        return;
    }
    
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}