#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    int i;
    for(i=0; i<n; i++){
        if(s[i]=='1' && s[i+1]=='0'){
            cnt++;
            i+=2;
        }
    }
    cout<<cnt<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}