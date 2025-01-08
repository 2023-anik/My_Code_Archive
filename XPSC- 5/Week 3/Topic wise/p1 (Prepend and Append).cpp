//https://codeforces.com/problemset/problem/1791/C

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
    string s;
    cin >> s;
    // int size = n;
    // int i, j;
    // for (i = 0, j = n - 1; i <= j; i++, j--)
    //     if(s[i]=='0' && s[j]=='1')
    //         size -= 2;
    //     else if(s[i]=='1' && s[j]=='0')
    //         size -= 2;
    //     else
    //         break;
    // cout << size << endl;

    //two pointer technique
    int l = 0, r = n - 1, sz = n;
    while(l<=r){
        if(s[l]==s[r])
            break;
        sz -= 2;
        l++, r--;
    }
    cout << sz << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}