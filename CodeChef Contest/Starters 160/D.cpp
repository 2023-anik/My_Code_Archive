#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int fast = x;
    int z = n-1;
    while(z--){
        cin>>x;
    }
    int last = x;
    if(fast==0 && last==1){
        cout<<2*n-2<<endl;
    }else{
        cout<<2*n-1<<endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}