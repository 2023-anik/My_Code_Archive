#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin>>n>>k;
    int min = 10*n;
    int max = 12*n; 
    cout<<(k>=min && k<=max?"YES":"NO")<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}