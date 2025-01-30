#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n, a, b, c;
    cin>>n;
    int i=1;
    unordered_map<int, int>mp;
    while(i<=n){
        cin>>a>>b>>c;
        if(a==1){
            mp[i]++;
        }
        if(b==1){
            mp[i]++;
        }
        if(c==1){
            mp[i]++;
        }
        i++;
    }
    int res=0;
    for(auto &[x, y]:mp){
        if(y>=2){
            res++;
        }
    }
    cout<<res<<endl;
    return;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}