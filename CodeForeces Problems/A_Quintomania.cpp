#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void solve(){
    int n;
    cin>>n;
    int x, a;
    cin>>x;
    a = x;
    bool ok=1;
    int i;
    for(i=1; i<n; i++){
        cin>>x;
        if(abs(a-x)!=5 and abs(a-x)!=7){
            ok = 0;
        }
        a = x;
    }
    ok?yes:no;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}