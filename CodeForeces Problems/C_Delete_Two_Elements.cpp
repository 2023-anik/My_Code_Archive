#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

/*
░█▀▀░█▀█░█▀▀░░░█▀▀░█▀▄░█▀▄░█▀█░█▀▄░█
░█▀▀░█░█░█▀▀░░░█▀▀░█▀▄░█▀▄░█░█░█▀▄░▀
░▀▀▀░▀▀▀░▀░░░░░▀▀▀░▀░▀░▀░▀░▀▀▀░▀░▀░▀
*/

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int sum = 0;
    for(auto &it : a){
        cin>>it;
        sum += it;
    }
    double k = (double)sum/n;
    double t = k*2;
    int res = 0;
    unordered_map<double, int> mp;
    for(auto &it:a){
        double z = t - it;
        if(mp.count(z)){
            res += mp[z];
        }
        mp[it]++;
    }
    cout<<res<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}