#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int a, b;

int findAns(int a, int b){
    if (a % b == 0) {
        return 0;
    } else {
        return b - (a % b);
    }
}

void solve(){
    cin>>a>>b;
    cout<<findAns(a,b)<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}