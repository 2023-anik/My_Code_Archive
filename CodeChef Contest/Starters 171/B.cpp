#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

/*
░█▀▀░█▀█░█▀▀░░░█▀▀░█▀▄░█▀▄░█▀█░█▀▄░█
░█▀▀░█░█░█▀▀░░░█▀▀░█▀▄░█▀▄░█░█░█▀▄░▀
░▀▀▀░▀▀▀░▀░░░░░▀▀▀░▀░▀░▀░▀░▀▀▀░▀░▀░▀
*/

void solve(){
    string s;
    cin >> s;
    string target="ADVITIYA";
    int total = 0;
    for (int i = 0; i < 8; ++i) {
        int current = s[i] - 'A';
        int t = target[i] - 'A';
        int diff = (t - current + 26) % 26;
        total += diff;
    }
    cout << total << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}