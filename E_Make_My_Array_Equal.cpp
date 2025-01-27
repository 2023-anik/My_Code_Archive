#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &it:a){
        cin>>it;
    }
    if(n==1){
        yes;
        return;
    }
    if(n==2){
        if(a[0]==a[1] || (a[0]==0 || a[1]==0)){
            yes;
        }else{
            no;
        }
        return;
    }
    sort(all(a));
    int i;
    for(i=0; i<n-1; i++){
        if(a[i]==0){
            continue;
        }
        else if(a[i]!=a[i+1]){
            no;
            return;
        }
    }
    yes;
    return;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}