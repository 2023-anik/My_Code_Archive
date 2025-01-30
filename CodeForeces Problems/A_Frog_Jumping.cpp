#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int a, b, k;
    cin>>a>>b>>k;
    if(k%2==0){
        cout<<(a*(k/2))-(b*(k/2))<<endl;
    }else{
        cout<<(a*(k/2))-(b*(k/2))+a<<endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}