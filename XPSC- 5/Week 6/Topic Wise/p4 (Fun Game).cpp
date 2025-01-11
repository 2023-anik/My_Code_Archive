//https://codeforces.com/problemset/problem/1994/B

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
    string s, t;
    cin >> s >> t;
    int y = s[0] - '0'; // Convert char to int
    if(y==1){
        yes;
        return;
    }
    for (int i = 0; i < n; i++){
        if(s[i] != t[i]){
            int x = s[i] - '0'; // Convert char to int
            int z = (x ^ y);
            s[i] = z + '0'; // Convert int to char
        }
        
    }
    // cout << s << " " << t << endl;
    s == t ? yes : no;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}