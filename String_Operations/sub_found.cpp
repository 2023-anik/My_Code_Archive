#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    string s="Anik Sen";
    cout<<((s.find("Sen")!=-1)?"Found\n":"Not found\n");
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; //cin>>tc;
    while(tc--) solve();
    return 0;
}