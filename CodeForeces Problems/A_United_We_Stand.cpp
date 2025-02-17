#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define input(v) for(auto &i : v) cin >> i
#define ITE(i, a, b) for(auto i = a; i < b; i++)
#define ITER(i, a, b) for(auto i = a; i > b; i--)
#define ITEE(i, a, b) for(auto i = a; i <= b; i++)
#define ITERE(i, a, b) for(auto i = a; i >= b; i--)

void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    input(a);
    sort(all(a));
    int min = a[0];
    int cnt = count(all(a), min);
    if(n==cnt){
        cout<<-1<<endl;
        return;
    }
    cout<<cnt<<" "<<abs(n-cnt)<<endl;
    ITE(i, 0, cnt){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    ITE(i, cnt, n){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}