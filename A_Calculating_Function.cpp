#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    cout<<(n%2==0 ? n/2 : -(n+1)/2)<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}