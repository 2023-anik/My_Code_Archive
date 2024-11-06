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
    map<string, vi> mp;
    int i, j;
    string s;
    for (i = 0; i < 3; i++)
        for (j = 0; j < n; j++){
            cin >> s;
            mp[s].push_back(i);
        }
    // for(auto &[x, y]:mp){
    //     cout << x << "-->";
    //     for(auto &per:y)
    //         cout << per << " ";
    //     cout << endl;
    // }
    vi eachPoint(3), v;
    // 0 -> 0; 1st person
    // 1 -> 0; 2nd person
    // 2 -> 0; 3rd person
    for (auto &[x, y] : mp)
    {
        v = y;
        if(v.size()==1)
            eachPoint[v[0]] += 3;
        if(v.size()==2){
            eachPoint[v[0]]++;
            eachPoint[v[1]]++;
        }
    }
    for(auto &it:eachPoint)
        cout << it << " ";
    cout << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}