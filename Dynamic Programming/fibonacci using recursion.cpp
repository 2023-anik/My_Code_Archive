#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FOR(i, n) for (int i = 0; i < n; ++i)//0 to n-1
#define FOR1(i, n) for (int i = 1; i <= n; ++i)//1 to n
#define REP(i, a, b) for (int i = a; i <= b; ++i)//a to b inclusive
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'
typedef vector<int> vi;
typedef pair<int, int> pii;

int fibo(int n){
    if(n==0 || n==1) return n;//base case
    return fibo(n-1) + fibo(n-2);
    //O(2^n)
    //value of n must be until 20 to run this code in 1sec
}

void solve(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}