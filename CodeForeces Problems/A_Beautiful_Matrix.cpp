#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void solve(){
    int i, j, x, r, c;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            cin>>x;
            if(x==1) r=i, c=j;
        }
    }
    cout<<abs(3-r)+abs(3-c)<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}