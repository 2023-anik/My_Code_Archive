#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int a1, a2, a4, a5;
    cin>>a1>>a2>>a4>>a5;
    int ans=0, maxi;
    vector<int>a3={a4 - a2, a5 - a4, a1 + a2};
    for(auto &it:a3){
        maxi=0;
        if (a4 == a2 + it) maxi++;
        if (a5 == it + a4) maxi++;
        if (it == a1 + a2) maxi++;
        ans = max(ans, maxi);
    }
    cout<<ans<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}