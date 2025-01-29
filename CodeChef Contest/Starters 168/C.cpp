#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    string a, b;
    cin>>a>>b;
    int cnt=0, i;
    for(i=0; i<n; i++){
        if(a[i]!=b[i]){
            yes;
            return;
        }
        cnt += a[i];
    }
    cnt%2==1?yes:no;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}