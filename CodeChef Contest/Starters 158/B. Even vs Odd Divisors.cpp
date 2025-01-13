#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    int i, e = 0, o =0 ;
    for (i = 1; i * i <= n; i++){
        if(n%i==0 && i%2==0){
            e++;
            if((n/i)%2==0 && (n/i)!=i){
                e++;
            }
            else if((n/i)%2==1){
                o++;
            }
        }else if(n%i==0 && i%2==1){
            o++;
            if((n/i)%2==0){
                e++;
            }
            else if(n/i!=i){
                o++;
            }
        }
    }
    if(e>o)
        cout << 1 << endl;
    else if(e==o)
        cout << 0 << endl;
    else
        cout << -1 << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}