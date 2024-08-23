#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    int total_sum=0;
    for(int i=0; i<n; i++){
        cin>>nums[i];
        total_sum+=nums[i];
    }
    int left_sum=0;
    for(int i=0; i<n; i++){
        int right_sum=total_sum-left_sum-nums[i];
        if(left_sum==right_sum){
            cout<<i<<endl;
            return;
        }
        left_sum+=nums[i];
    }
}

int32_t main(){
    fast();
    int tc=1; //cin>>tc;
    while(tc--) solve();
    return 0;
}