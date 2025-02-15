#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'

void solve(){
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='A'){
            for(int j=i+1; j<s.length(); j++){
                if(s[j]=='B'){
                    if(s[(2*j)-i]=='C') cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}