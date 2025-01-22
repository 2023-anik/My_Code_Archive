#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()

void solve(){
    string s, res;
    cin>>s;
    sort(all(s));
    s.erase(0, s.find_first_not_of('+'));
    int i;
    for(i=0; i<s.length(); i++){
        res+=s[i];
        if(i<s.length()-1){
            res+='+';
        }
    }
    cout<<res<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}