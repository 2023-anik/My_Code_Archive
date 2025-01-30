#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int MAX=1e6;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    unordered_map<int, int>mp;
    for(auto &it:a){
        cin>>it;
        mp[it]++;
    }
    
    int sum = accumulate(all(a), 0LL);
  
    vector<int>ans;
    int i;
    for(i=0; i<n; i++){
        sum-=a[i];
        mp[a[i]]--;
        if (sum % 2 == 0 && sum / 2 <= MAX && mp[sum / 2] > 0) {
			ans.push_back(i+1);//1 based index
		}
       
		sum += a[i];
		mp[a[i]]++;
    }
    
    if(ans.empty()){
        cout<<0<<endl;
        return;
    }
    cout<<ans.size()<<endl;
    for(auto &it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}