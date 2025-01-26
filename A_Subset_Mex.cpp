#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    int x;
    int vis[2][102]={0};
    int i;
    for(i=1; i<=n; i++){
        cin>>x;
        if(!vis[0][x]){
            vis[0][x]=1;
        }else{
            vis[1][x]=1;
        }
    }
    int ansa=0, ansb=0;
    while(vis[0][ansa])++ansa;
    while(vis[1][ansb])++ansb;

    cout<<ansa+ansb<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}