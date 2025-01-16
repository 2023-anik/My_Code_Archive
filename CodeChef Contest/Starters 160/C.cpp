#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin>>n>>m;
    string s, t;
    cin>>s>>t;
    if(s==t){
        cout<<"YES"<<endl;
        return;
    }
    int cnts=0, cntt=0;
    for(auto &it:s){
        if(it=='a'){
            break;
        }
        cnts++;
    }
    for(auto &it:t){
        if(it=='a'){
            break;
        }
        cntt++;
    }
    if(cnts!=cntt){
        cout<<"NO"<<endl;
        return;
    }
    if(count(s.begin(), s.end(), 'a')==count(t.begin(), t.end(), 'a')){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}