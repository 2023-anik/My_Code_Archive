// https://codeforces.com/problemset/problem/368/B

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
    int n, m;
    cin >> n >> m;
    vi arr(n);
    for(auto &it:arr)
        cin >> it;
    int l;
    set<int> s;

    //Inefficient Approach
    // while (m--){
    //     cin >> l;
    //     for(int i=l-1; i<n; i++)
    //         s.insert(arr[i]);
    //     cout << s.size() << endl;
    //     s.clear();
    // }

    vi cntSize(n);
    int i;
    for (i = n - 1; i >= 0; i--){
        s.insert(arr[i]);
        cntSize[i] = s.size();
    }
    while(m--){
        cin >> l;
        cout << cntSize[l-1] << endl;
    }

    return;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}