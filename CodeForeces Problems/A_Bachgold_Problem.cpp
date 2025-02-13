#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define ITE(i, a, b) for(int i=a; i<b; i++)
#define ITER(i, a, b) for(int i=a; i>b; i--)
#define ITEE(i, a, b) for(int i=a; i<=b; i++)
#define ITERE(i, a, b) for(int i=a; i>=b; i++)

void solve(){
    ll n;
    cin>>n;
    cout<<n/2<<endl;
    if(n%2==0){
        ITE(i, 0, n/2){
            cout<<2<<" ";
        }
        cout<<endl;
    }else{
        ITE(i, 0, n/2-1){
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}