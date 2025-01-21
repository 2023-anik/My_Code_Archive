#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    int cntNg=0, sum=0;
    for(auto &it:a){
        cin>>it;
        if(it<0){
            cntNg++;
            it = -it;
        }
        sum+=it;
    }
    sort(all(a));
    int res = cntNg&1 ? sum-(2*a[0]) : sum;
    cout<<res<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}