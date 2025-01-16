#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x, y, z;
    cin>>x>>y>>z;
    cout<<min(2*x+3*y, (2*z)+y)<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}