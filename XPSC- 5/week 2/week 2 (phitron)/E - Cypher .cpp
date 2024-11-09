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
    vi a(n);
    for(auto &it:a)
        cin >> it;
    int i, x;
    // char ch;
    string s;
    for (i = 0; i < n; i++){
        cin >> x >> s;
        for(char ch:s){
            ch == 'D' ? a[i]++ : a[i]--;
            if(a[i]>=10)
                a[i] = 0;
            if(a[i]<0)
                a[i] = 9;
        }
    }
    for(auto &it:a)
        cout << it <<" ";
    cout << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}