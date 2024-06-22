#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    string s="aaaabcaaaaadaaaa";
    // remove(s.begin(), s.end(), 'a');
    // cout<<s<<endl;
    s.erase(remove(s.begin(), s.end(), 'a'), s.end());
    cout<<s<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; //cin>>tc;
    while(tc--) solve();
    return 0;
}