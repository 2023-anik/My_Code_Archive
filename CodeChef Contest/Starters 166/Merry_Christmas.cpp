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
    int x;
    cin>>x;
    int cnt=0;
    if(x<=2){
        cout<<1<<endl;
        return;
    }
    if(x>2 && x<=6){
        cout<<2<<endl;
        return;
    }
    if(x>6 && x<=10){
        cout<<3<<endl;
        return;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}