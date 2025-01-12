//https://codeforces.com/problemset/problem/762/A

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve(){
    int n, k;
    cin >> n >> k;
    vi divisors;
    int i;
    for (i = 1; i <= sqrt(n); i++){
        if(n%i==0){
            divisors.push_back(i);
            if((n/i)!=i){
                divisors.push_back(n/i);
            }
        }
    }
    sort(all(divisors));
    // for(auto &it:divisors)
    //     cout << it << " ";
    // cout << endl;
    // auto it = find(all(divisors), divisors[k-1]); //given constrients (1 ≤ n ≤ 10^15)
    // cout << (it != divisors.end() ? divisors[k-1] : -1) << endl;
    cout << (k > divisors.size() ? -1 : divisors[k - 1]) << endl;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}