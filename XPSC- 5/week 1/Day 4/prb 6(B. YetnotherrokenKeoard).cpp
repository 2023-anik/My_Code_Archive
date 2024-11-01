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

void solve() {
    string s1, s2;
    cin >> s1;
    for (char ch : s1){
        if (ch == 'b') {
            auto it = find_if(rall(s2), [](char c) { return c >= 'a' && c <= 'z'; });
            if (it != s2.rend()) 
                s2.erase(next(it).base());
        } else if (ch == 'B') {
            auto it = find_if(rall(s2), [](char c) { return c >= 'A' && c <= 'Z'; });
            if (it != s2.rend())
                s2.erase(next(it).base());
        } else s2 += ch;
    }
    cout << s2 << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}