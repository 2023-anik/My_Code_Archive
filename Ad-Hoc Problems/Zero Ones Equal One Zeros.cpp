//https://www.codechef.com/problems/ZOOZ

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n, i;
    cin >> n;
    for (i = 1; i <= n; i++){
        if(i==1 || i==n){
            cout << "1";
            continue;
        }
        cout << "0";
    }
    cout << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}

//The string will be for length 6 ether 100001 or 011110