#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

class cmp{
    public:
    bool operator()(const pair<string, int>&a, const pair<string, int>&b)const{
        return a.second<b.second;
    }
};

void solve(){
    int n;
    cin>>n;
    vector<pair<string, int>>vec;
    int i;
    string s;
    for(i=0; i<n; i++){
        cin>>s;
        vec.push_back({s, i});
    }
    sort(vec.rbegin(), vec.rend(), cmp());
    map<string, bool>mp;
    for(const auto &it:vec){
        if(!mp[it.first]){
            cout<<it.first<<endl;
            mp[it.first]=1;
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}