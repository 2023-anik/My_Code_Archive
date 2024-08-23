#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    long long int n; cin>>n;
    cout<<(n*(n+1))/2<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; //cin>>tc;
    while(tc--) solve();
    return 0;
}