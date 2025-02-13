#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'
#define ITE(i, a, b) for(auto i = a; i < b; i++)
#define ITER(i, a, b) for(auto i = a; i > b; i--)
#define ITEE(i, a, b) for(auto i = a; i <= b; i++)
#define ITERE(i, a, b) for(auto i = a; i >= b; i--)

vector<ll>v={1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111};

void solve(){
    ll n;
    cin>>n;
    int k = 0;
    int res = 0;
    while(k < v.size()){
        ITEE(j, 1, 9){
            if(v[k]*j<=n) res++;
        }
        k++;
    }
    cout<<res<<endl;
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