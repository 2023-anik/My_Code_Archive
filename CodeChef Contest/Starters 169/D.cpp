#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void solve(){
    int n, x;
    cin>>n>>x;
    vector<int>a(n);
    unordered_map<int,int>mp;
    for(auto &it:a){
        cin>>it;
        mp[it]++;
    }
    auto max_pair = max_element(mp.begin(), mp.end(), [](const auto &a, const auto &b){
        return a.second<b.second;
    });
    int max_cnt=max_pair->second;
    // cout<<max_pair->first<<" -> "<<max_cnt<<endl;
    if(mp[x]==max_cnt){
        cout<<0<<endl;
        return;
    }
    unordered_map<int, int>cp_mp=mp;//check for prefix
    for(auto &it:a){
        
        max_pair = max_element(cp_mp.begin(), cp_mp.end(), [](const auto &a, const auto &b){
        return a.second<b.second;
        });
        max_cnt=max_pair->second;
        // cout<<max_pair->first<<" -> "<<max_cnt<<endl;
        if(cp_mp[x]==max_cnt){
            cout<<1<<endl;
            return;
        }
        cp_mp[it]--;
    }
    cp_mp = mp;//check for suffix
    int i;
    for(i=n-1; i>=0; i--){
        max_pair = max_element(cp_mp.begin(), cp_mp.end(), [](const auto &a, const auto &b){
        return a.second<b.second;
        });
        max_cnt=max_pair->second;
        // cout<<max_pair->first<<" -> "<<max_cnt<<endl;
        if(cp_mp[x]==max_cnt){
            cout<<1<<endl;
            return;
        }
         cp_mp[a[i]]--;
    }
    cout<<2<<endl;
    return;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}