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
    vector<int>a;
    int x, i;
    for(i=0; i<n; i++){
        cin>>x;
        x%=k;
        a.push_back(x);
    }
    sort(all(a));
    int ans = a[n-1]-a[0];
    for(i=0; i<n-1; i++){
        ans = min(ans, a[i]+k - a[i+1]);
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