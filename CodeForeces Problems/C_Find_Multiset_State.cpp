#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n, k;
    cin>>n>>k;
    deque<int>a(n);
    for(auto &it:a){
        cin>>it;
    }
    int sum, i;
    for(i=1; i<=k; i++){
        sum = a.front()+a.back();
        a.pop_front();
        a.pop_back();
        a.push_back(sum);
    }
    for(auto &it:a){
        cout<<it<<" ";
    }
    cout<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}