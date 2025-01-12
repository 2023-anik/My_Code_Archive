// https://codeforces.com/problemset/problem/735/D

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPrime(int x){
    if(x==0 || x==1)
        return 0;
    int i;
    for (i = 2; i * i <= x; i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}

void solve(){
    int n;
    cin >> n;
    if(isPrime(n)){//for prime number
        cout << 1 << endl;
        return;
    }
    if((n&1)==0){//for even number, observation from "Goldbach's Conjecture"
        cout << 2 << endl;
        return;
    }
    // for odd number(n)=x+3;if, x is even and not prime, ans will be 3
    //if x is prime then, ans will be 2
    cout << (isPrime(n - 2) ? 2 : 3) << endl;
    return;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}