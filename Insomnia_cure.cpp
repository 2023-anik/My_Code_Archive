#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;
    int i=1, cnt=0;
    while(i<=d){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0) cnt++;
        i++;
    }
    cout<<cnt<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}