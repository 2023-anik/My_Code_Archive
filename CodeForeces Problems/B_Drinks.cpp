#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    int x;
    int i=n;
    double res=0.0;
    while(i--){
        cin>>x;
        res+=((1.0*x)/n);
    }
    cout<<fixed<<setprecision(12)<<res<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}