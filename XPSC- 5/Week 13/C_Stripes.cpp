#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    vector<string> s(8);
    int i;
    for(auto &it:s){
        cin>>it;
    }
    for(auto &it:s){
        if(count(it.begin(), it.end(), 'R')==8){
            cout<<'R'<<endl;
            return;
        }
    }
    cout<<'B'<<endl;
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