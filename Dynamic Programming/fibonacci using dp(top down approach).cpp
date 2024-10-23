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

const int N = 1e6+5;
vi dp(N, -1);

int fibo(int n){
    if(n==0 || n==1) return n;
    if(dp[n] != -1) return dp[n];
    // return fibo(n-1) + fibo(n-2);
    int ans = fibo(n-1) + fibo(n-2);
    dp[n] = ans;
    return ans;
}

void solve(){
    cout<<fibo(1000)<<endl;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}