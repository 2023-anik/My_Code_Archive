#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n, k;
vector<int>preSum;

void prefixSum(){
    preSum.resize(n);
    int i;
    preSum[0]=5;
    for(i=1; i<=n; i++){
        preSum[i]=preSum[i-1]+((i+1)*5);
    }
}

void solve(){    
    cin>>n>>k;
    prefixSum();
    // for(auto &it:preSum){
    //     cout<<it<<" ";
    // }
    cout<<endl;
    int key=240-k;
    int l=0, r=n-1, mid, ans=0;
    while(l<=r){
        mid = l+(r-l)/2;
        if(preSum[mid]<=key){
            ans=mid+1;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}