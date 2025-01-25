#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

unordered_map<string, int>mp;

void solve(){
    string s;
    cin>>s;
    mp.count(s)?yes:no;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    mp["abc"]=1;
    mp["bac"]=1;
    mp["cba"]=1;
    mp["acb"]=1;
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}