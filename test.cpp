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
    getline(cin, s1);
    getline(cin, s2);

    try {
        int x = stoi(s1);
        int y = stoi(s2);
        cout << x + y << endl;
    } catch (const exception &e) {
        cerr << "Invalid input: " << e.what() << endl;
    }
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    cin.ignore();
    while (t--)
        solve();
    return 0;
}