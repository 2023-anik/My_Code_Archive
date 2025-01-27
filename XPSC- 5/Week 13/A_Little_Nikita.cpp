#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

void solve(){
    int n, m;
    cin>>n>>m;
    if(n<m){
        no;
        return;
    }
    if((n%2==0 && m%2==1) || (n%2==1 && m%2==0)){
        no;
        return;
    }
    yes;
    return;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}