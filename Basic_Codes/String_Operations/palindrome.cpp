#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n; cin>>n;
    int sum=0;
    while(n!=0){
        sum+=(n%10);
        n/=10;
    }
    string s=to_string(sum);
    int l=s.size();
    for(int i=0; i<l; i++){
        if(s[i]!=s[l-i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }cout<<"YES"<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; //cin>>tc;
    while(tc--) solve();
    return 0;
}