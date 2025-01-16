// https://codeforces.com/problemset/problem/1793/C

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a) cin >> it;
    int l=0, r=n-1;
    int mn=1, mx=n;
    while(l<=r){
        if(mn==a[l]){
            l++;
            mn++;
        }else if(mx==a[l]){
            l++;
            mx--;
        }else if(mn==a[r]){
            r--;
            mn++;
        }else if(mx==a[r]){
            r--;
            mx--;
        }else break;
    }
    if(l<=r){
        cout<<l+1<<" "<<r+1<<endl;
    }else{
        cout<<-1<<endl;
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