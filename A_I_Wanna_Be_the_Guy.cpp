#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    unordered_map<int, bool>mp;
    int i, x;
    for(i=0; i<p; i++){
        cin>>x;
        mp[x]=1;
    }
    int q;
    cin>>q;
    for(i=0; i<q; i++){
        cin>>x;
        mp[x]=1;
    }
    for(i=1; i<=n; i++){
        if(!mp.count(i)){
            cout<<"Oh, my keyboard!"<<endl;
            return;
        }
    }
    cout<<"I become the guy."<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}