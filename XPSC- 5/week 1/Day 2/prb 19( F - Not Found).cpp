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
    string s;
    cin >> s;
    for (char i = 'a'; i <= 'z'; i++)
        if(s.find(i)==string::npos){
            cout << i << endl;
            return;
        }
    cout << "None" << endl;
    // map<char, bool> mp;
    // for(auto &it:s)
    //     mp[it] = 1;
    // for (char i = 'a'; i <= 'z'; i++)
    //     if(!mp[i]){
    //         cout << i << endl;
    //         return;
    //     }
    //     cout << "None" << endl;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}