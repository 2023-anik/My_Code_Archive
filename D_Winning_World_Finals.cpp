#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n,m;
    cin>>n>>m;
    int cnt=1;
    int i, x;
    for(i=n; i<299; i++){
        x = m+(20*cnt)+i+1;
        if(x>1000){
            break;
        }
        cnt++;
    }
    cout<<cnt-1<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}