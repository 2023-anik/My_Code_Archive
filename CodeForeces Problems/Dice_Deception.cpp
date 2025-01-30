#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void solve(){
    int n, k;
    cin>>n>>k;
    vector<int>ar(n);
    for(auto &it:ar) cin>>it;
    int l=0, r=k, ans=0;
    sort(all(ar));
    while(l<n){
        if(ar[l]==1 && l<r)ans+=6;
        else if(ar[l]==2 && l<r)ans+=5;
        else if(ar[l]==3 && l<r)ans+=4;
        else ans+=ar[l];
        l++;
    }
    cout<<ans<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}