#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin>>n;
    string s;
    map<string, int>mp;
    while(n--){
        cin>>s;
        if(mp[s]==0){
            // mp[s]++;
            cout<<"OK"<<endl;
        }
        else{
            // mp[s]++;
            cout<<s<<mp[s]<<endl;
        }
        mp[s]++;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}