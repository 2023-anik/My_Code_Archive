#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    s.erase(0, s.find_first_not_of('0'));
    int ops=0, i;
    for(i=0; i<(int)s.length()-1; i++){
        if((s[i]=='1' && s[i+1]=='0') || (s[i]=='0' && s[i+1]=='1')){
            ops++;
        }
    }
    cout<<ops<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}