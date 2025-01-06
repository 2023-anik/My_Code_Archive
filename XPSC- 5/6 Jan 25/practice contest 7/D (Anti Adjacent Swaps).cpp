#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'
typedef vector<int> vi;

void solve(){
    int n;
    cin >> n;
    vi a(n);
    for(auto &it:a)
        cin >> it;

    if(n==1){
        yes;
        return;
    }
    if(n==2){
        if(a[0]<=a[1])
            yes;
        else
            no;
        return;
    }
    if(n==3){
        if(a[0]<=a[1] && a[1]<=a[2] || a[0]>=a[1] && a[1]>=a[2])
            yes;
        else
            no;
        return;
    }
    yes;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}