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
    vector<int>a(n);
    for(auto &it:a){
        cin>>it;
    }
    int cnt=0;
    if(a[k-1]==0){
        for(auto &it:a){
            if(it==0){
                cout<<cnt<<endl;
                return;
            }
            cnt++;
        }
    }
    cnt = count(a.begin(), a.end(), a[k-1]);

    for(auto &it:a){
        if(it==a[k-1])
            break;
        cnt++;
    }
    cout<<cnt<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}