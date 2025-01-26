#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define yes cout<<"DA"<<endl
#define no cout<<"NET"<<endl

void solve(){
    string s;
    cin>>s;
    int cnt=0;
    unordered_map<char, int>mp;
    for(auto &it:s){
        mp[it]++;
    }
    if(mp['0'>=mp['1']]){
        mp['1']%2==0?no:yes;
    }else{
        mp['0']%2==0?no:yes;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}