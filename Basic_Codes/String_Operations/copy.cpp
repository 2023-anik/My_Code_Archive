#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    string a="Anik";
    string b="Tui Sen Gadha";
    // T->0
    // u->1
    // i->2
    // space->3
    // S->4
    copy(b.begin()+3, b.begin()+7, back_inserter(a));
    cout<<a<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; //cin>>tc;
    while(tc--) solve();
    return 0;
}