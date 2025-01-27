#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &it:a){
        cin>>it;
    }
    if(is_sorted(all(a))){
        yes;
        return;
    }
    vector<int>ans, x, y;
    int i;
    for(i=0; i<n-1; i++){
        if(a[i]<=a[i+1]){
            x.push_back(a[i]);
        }else{
            break;
        }
    }
    x.push_back(a[i]);
    i++;
    for(; i<n; i++){
        y.push_back(a[i]);
    }
    // ans = x + y
    ans.insert(ans.end(), all(x));
    ans.insert(ans.end(), all(y));
    if(is_sorted(all(ans))){//to check asccending order
        yes;
        return;
    }
    ans.clear();
    // ans = y + x
    ans.insert(ans.end(), all(y));
    ans.insert(ans.end(), all(x));
    if(is_sorted(all(ans))){
        yes;
        return;
    }
    no;
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