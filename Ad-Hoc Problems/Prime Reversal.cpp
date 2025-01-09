//https://www.codechef.com/problems/PRIMEREVERSE

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'

void solve(){
    int n, cnt1 = 0, cnt2 = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int i;
    for (i = 0; i < n; i++){
        if(a[i]=='0' && b[i]=='1')
            cnt1++;
        if(a[i]=='1' && b[i]=='0')
            cnt2++;
    }
    cnt1 == cnt2 ? yes : no;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}