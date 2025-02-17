#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'

void solve(){
    ll n;
    cin>>n;
    ll sum=0, x;
    bool ok = 0;
    for(int i=0; i<n; i++){
        cin>>x;
        sum+=x;
        if(x%3==1){
            ok = 1;
        }
    }
    if(sum%3==0){
        cout<<0<<endl;
    }else if(sum%3==2){
        cout<<1<<endl;
    }else{
        if(ok){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}