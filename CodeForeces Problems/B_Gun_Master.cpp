#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n, d;
    cin>>n>>d;
    bool cg = 1;
    int x;
    int i, cnt=0;
    for(i=1; i<=n; i++){
        cin>>x;
        if(x > d && cg){
            cnt++;
            cg = 0;
        } else if (x <= d && !cg) {
            cnt++;
            cg = 1;
        }
    }
    cout<<cnt<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}