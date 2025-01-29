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
    string s;
    cin>>s;
    int cnt=0;
    for(auto &it:s){
        if(it=='0') cnt++;
    }
    cout<<(cnt>0 && cnt!=n ? 1 : n)<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}