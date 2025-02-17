#include<bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, x;
    cin>>n>>x;
    int cnt=0;
    for(int i=1; i<=n; i++){
        if((x+i)%2==0 && i!=x){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}