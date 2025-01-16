#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n, m;
    cin>>n>>m;
    string name, ip;
    unordered_map<string, string>mp;
    while(n--){
        cin>>name>>ip;
        mp[ip+';']=name;
    }
    while(m--){
        cin>>name>>ip;
        cout<<name<<" "<<ip<<" #"<<mp[ip]<<endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}