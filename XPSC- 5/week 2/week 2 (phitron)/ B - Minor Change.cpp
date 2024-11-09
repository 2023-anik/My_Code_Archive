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
    string s, t;
    cin >> s >> t;
    // int op = 0;
    // int i;
    // for (i = 0; i < s.length(); i++)
    //     if(s[i]!=t[i])
    //         op++;
    // cout << op << endl;
    int i = 0;
    int op = count_if(all(s), [&](char c) mutable{
        return c != t[i++];
    });
    cout << op << endl;
    //"mutable" keyword is used in the lambda to allow modifying the captured variable i.
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}