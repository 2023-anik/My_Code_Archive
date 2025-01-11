#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout<<"No"<<'\n'
#define yes cout<<"Yes"<<'\n'
#define endl '\n'

void solve(){
    int n, k, x;
    cin >> n >> k >> x;
    int sum = 0;
    int crnt = 1;
    int i;
    for (i = 1; i < k; i++){
        sum += crnt;
        crnt = sum + 1;
        if(sum > x){
            no;
            return;
        }
    }
    x > sum ? yes : no;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}