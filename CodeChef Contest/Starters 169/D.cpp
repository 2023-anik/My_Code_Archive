#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    int cntK=0;
    for(auto &it:a){
        cin>>it;
        if(it==k) cntK++;
    }
    if(cntK==n){
        cout<<0<<endl;
        return;
    }

    int l=0, r=0, cnt=0, ans=n;
    while(r<n){
        if(a[r]==k) cnt++;
        r++;
        while(cnt==cntK){
            ans=min(ans, r-l);
            if(a[l]==k) cnt--;
            l++;
        }
    }
    cout<<(cntK>=n-cntK?0:ans)<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}